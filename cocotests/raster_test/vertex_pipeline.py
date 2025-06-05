import pywavefront
import numpy as np

assets_path = '../../assets/'


# FB = np.empty((screen_height,screen_width,3),dtype=np.uint8)


def create_tile_bin():
    SCREEN_WIDTH = 640
    SCREEN_HEIGHT = 480
    TILE_WIDTH = 16
    TILE_HEIGHT = 16
    Z_MAX = 1024

    CAM_POS = np.array([0, 0, 10])
    CAM_TARGET = np.array([0, 0, 0])
    CAM_UP = np.array([0, 1, 0])
    
    scene = pywavefront.Wavefront(assets_path + 'monkey.obj', collect_faces=True)
    object_vertices = get_vertices(scene)

    # Camera setup
    view_matrix = create_view_matrix(CAM_POS, CAM_TARGET, CAM_UP)
    # print(view_matrix)
    
    ortho_left = -2
    ortho_right = 2
    ortho_bottom = -2
    ortho_top = 2
    ortho_near = 1
    ortho_far = 20
    projection_matrix = create_orthographic_projection_matrix(ortho_left, ortho_right, ortho_bottom, ortho_top, ortho_near, ortho_far)

    # Convert to screen space
    vertex_screen = object_to_screen(object_vertices, view_matrix, projection_matrix, SCREEN_WIDTH, SCREEN_HEIGHT, Z_MAX)
    
    tile_bin = bin_vertices(vertex_screen, SCREEN_WIDTH, SCREEN_HEIGHT, TILE_WIDTH, TILE_HEIGHT)
    return tile_bin

def generate_img(filename, framebuffer):
    height, width, channels = framebuffer.shape

    with open(filename, 'w') as f:
        f.write(f'P3\n')
        f.write(f'{width} {height}\n')
        f.write(f'255\n')  # Max color value

        for y in range(height):
            for x in range(width):
                r, g, b = framebuffer[y, x]
                f.write(f'{r} {g} {b} ')
            f.write('\n')

def get_vertices(scene):
    if len(scene.mesh_list) != 1:
        raise ValueError
    
    mesh = scene.mesh_list[0]
    verts = np.array([[scene.vertices[i] for i in f] for f in mesh.faces])
    homogeneous_vertex_faces = np.array([[np.append(v, 1.0) for v in f] for f in verts])
    homogeneous_vertices = np.array([v for f in homogeneous_vertex_faces for v in f])
    return homogeneous_vertices.T

def float_to_12_4(f):
    whole = int(f)
    frac = round((f - whole) * 16)
    if (frac == 16 and whole < (1 << 12)-1):
        whole += 1
        frac = 0
    elif (frac == 16):
        frac = 15
    
    fx = (whole << 4) | frac
    return fx


def create_view_matrix(camera_position, camera_target, up_vector):
    # points away from look direction since forward is -z
    z = normalize(camera_position - camera_target)
    x = normalize(np.cross(up_vector, z))
    y = np.cross(z, x)

    # R of world-space coords wrt cam-space
    orientation = np.array([
        [x[0], y[0], z[0], 0],
        [x[1], y[1], z[1], 0],
        [x[2], y[2], z[2], 0],
        [0,    0,    0,    1]
    ]).T


    # move everything opposite of camera pos
    translation = np.array([
        [1, 0, 0, -camera_position[0]],
        [0, 1, 0, -camera_position[1]],
        [0, 0, 1, -camera_position[2]],
        [0, 0, 0, 1]
    ])

    return orientation @ translation

def normalize(vector):
    norm = np.linalg.norm(vector)
    if norm == 0:
        return vector
    return vector / norm

def create_orthographic_projection_matrix(left, right, bottom, top, near, far):
    return np.array([
        [2 / (right - left), 0,                 0,                  -(left + right)/(right - left)],
        [0,                 2 / (top - bottom), 0,                  -(bottom + top)/(top - bottom)],
        [0,                 0,                 2 / (near - far),     (near + far)  /(near - far)  ],
        [0,                 0,                 0,                                               1 ]
    ])

def object_to_screen(vertices_object, view_matrix, projection_matrix, screen_width, screen_height, z_max):
    world_matrix = np.identity(4) # Identity world matrix

    vertex_world = world_matrix     @ vertices_object
    vertex_view = view_matrix       @ vertex_world
    vertex_clip = projection_matrix @ vertex_view
    
    # NDC to VGA space
    screen_space_matrix = np.array([
        [screen_width/2,    0,                  0,          screen_width/2],
        [0,                 -screen_height/2,   0,          screen_height/2],
        [0,                 0,                  z_max/2,    z_max/2],
        [0,                 0,                  0,          1]
    ])

    # Map to screen coordinates (top-left origin)
    vertex_screen_homogenous = screen_space_matrix @ vertex_clip
    vertex_screen = (vertex_screen_homogenous.T)[:,:-1]

    return vertex_screen


def bin_vertices(vertex_screen, screen_width, screen_height, tile_width, tile_height):
    num_tiles_x = int(screen_width/tile_width)
    num_tiles_y = int(screen_height/tile_height)
    
    tile_bins = np.empty((num_tiles_y, num_tiles_x), dtype=object)
    for j in range(num_tiles_y):
        for i in range(num_tiles_x):
            tile_bins[j, i] = []

    for i in range(0,vertex_screen.shape[0],3):
        f = vertex_screen[i:i+3]
        min_tile_x, max_tile_x, min_tile_y, max_tile_y = get_tiles(f.T, screen_width, screen_height, tile_width, tile_height)
        
        for y in range(min_tile_y, max_tile_y+1):
            for x in range(min_tile_x, max_tile_x+1):
                tile_bins[y,x].append(np.array([[float_to_12_4(c) for c in v] for v in f]))
    
    return tile_bins

def get_tiles(f, screen_width, screen_height, tile_width, tile_height):
    min_x = max(np.min(f[0]), 0)
    max_x = min(np.max(f[0]), screen_width-1)
    min_y = max(np.min(f[1]), 0)
    max_y = min(np.max(f[1]), screen_height-1)
    
    min_tile_x = int(min_x / tile_width)
    max_tile_x = int(max_x / tile_width)
    min_tile_y = int(min_y / tile_height)
    max_tile_y = int(max_y / tile_height)
    
    return (min_tile_x, max_tile_x, min_tile_y, max_tile_y)

if __name__ == "__main__":
    main()
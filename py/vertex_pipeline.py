import pywavefront
import numpy as np

def main():
    assets_path = '../assets/'
    scene = pywavefront.Wavefront(assets_path + 'rotated_cube.obj', collect_faces=True)
    get_vertices(scene)
    fx = float_to_12_4(1.0624)
    print(fx)

def get_vertices(scene):
    for mesh in scene.mesh_list:
        print(mesh.name)
        verts = np.array([[scene.vertices[i] for i in f] for f in mesh.faces])
        print(verts)

def float_to_12_4(f):
    whole = int(f)
    frac = round((f - whole) * 16)
    if (frac == 16 and whole < (1 << 12)-1):
        whole += 1
        frac = 0
    elif (frac == 16):
        frac = 15
    
    fx = (whole << 12) | frac
    return fx
    
    

if __name__ == "__main__":
    main()
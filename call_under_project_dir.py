import sys
# sys.path.append('bazel-bin/chef')
# sys.path.append('/media/chu/data/projects/cpp/pybind_project/bazel-bin/chef')

# import ctypes
# lib = ctypes.CDLL('bazel-bin/chef/libforeplay_py.so')


# the cc_binary name is foreplay_py, but the PYBIND_MODULE name is chef_tom, so we need to rename the shared lib(bin) 
# from libforeplay_py.so to chef_tom.so, or use a symbolic link chef_tom.so to point to the libforeplay_py.so


# build/lib is where the library located
from build.lib import chef_tom

def main():
    print(chef_tom.bake(1))
    print(chef_tom.knead(2))

if __name__ == "__main__":
    main()

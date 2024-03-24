# /my_project/chef/BUILD

# load("@pybind11//:build_defs.bzl", "pybind_extension")

# Define C++ library for the "cook" functionality
cc_library(
    name = "cook_lib",
    srcs = ["cook.cpp"],
    hdrs = ["cook.h"],
    visibility = ["//visibility:public"],
)

# Define C++ library for the "foreplay" functionality
cc_library(
    name = "foreplay_lib",
    srcs = ["foreplay.cpp"],
    hdrs = ["foreplay.h"],
    deps = [":cook_lib"],  # Depends on cook_lib
    visibility = ["//visibility:public"],
)


# Define Python extension using Pybind11
# can't create a python loadable pckage with cc_library alone, cc_binary is needed, and linkshared=1
cc_binary(
    name = "foreplay_py",
    srcs = ["foreplay_pybind.cpp"],
    deps = [
        ":cook_lib",
        ":foreplay_lib",
        "//includes_system:system_headers",
    ],
    linkshared = 1,  # Important for creating a shared library.
    linkopts = ["-lpython3.8", "-shared", "-fPIC"],
    visibility = ["//visibility:public"],
)



# # make a lib and then cc_binary, cc_library alone can't create a shared library for python to use
# # this way doesn't work, however. But not troubleshot yet
# cc_library(
#     name = "foreplay_py_lib",  # Naming as a library
#     srcs = ["foreplay_pybind.cpp"],
#     deps = [
#         ":cook_lib",
#         ":foreplay_lib",
#         "//includes_system:system_headers",  # Assume this is correctly set up for headers
#     ],
#     visibility = ["//visibility:public"],
# )

# cc_binary(
#     name = "foreplay_py",  # This is the actual Python extension module
#     srcs = [],  # No source files directly; it's all coming from deps
#     deps = [
#         ":foreplay_py_lib",  # Depend on the cc_library defined above
#     ],
#     linkshared = 1,
#     linkopts = ["-lpython3.8", "-shared", "-fPIC"],
#     visibility = ["//visibility:public"],
# )

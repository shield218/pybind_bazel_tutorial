# /my_project/BUILD

# cc_binary(
#     name = "all_in_one",
#     srcs = ["main.cpp"],  # Assuming main.cpp is at the root and uses multiple modules
#     deps = [
#         "//chef:chef_binary",  # Reference the binary defined in /chef/BUILD
#         # Add other module dependencies as needed
#     ],
# )


cc_binary(
    name = "chef_binary",
    srcs = ["main.cpp"],  # Adjust the path as needed
    deps = [
        "//chef:cook_lib",
        "//chef:foreplay_lib",
        # "//includes_system:fmt",  ### don't use this one, or it may cause confusion of locale.h and make the build fail

    ], # don't configure cc_library for fmt and add the cc_library to deps here
    linkopts = ["-lfmt"], # needed to use fmt
)
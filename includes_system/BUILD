cc_library(
    name = "system_headers",
    hdrs = glob([
        "python_include/**/*.h",
        "pybind11_include/**/*.h",
        # "**/*.h",
    ]),
    includes = [
        # ".",
        "python_include",
        "pybind11_include",
    ],  # This line makes these directories part of the include path for dependent targets.
    visibility = ["//visibility:public"],  # Allows this target to be accessible from any package.
)

# # Don't use it as dependency!!!!! this may cause confusion of locale.h and cause build failure
# cc_library(
#     name = "fmt",
#     hdrs = glob(["fmt_include/**/*.h"]),
#     srcs = glob(["fmt_include/**/*.c"]),
#     includes = ["fmt_include"],
#     visibility = ["//visibility:public"],  # Allows this target to be accessible from any package.
# )
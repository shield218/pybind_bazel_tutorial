// complicated_project/chef/chef_pybind.cpp
// Import the Pybind11 main header
#include <pybind11/pybind11.h>
// Import declarations for the bake function
#include "cook.h"
// Import declarations for the knead function
#include "foreplay.h"

// Create a Pybind11 module named 'chef'
PYBIND11_MODULE(chef_tom, m) {
    // Namespace documentation (optional but recommended for clarity)
    m.doc() = "Pybind11 plugin for chef"; // Optional module docstring

    // Expose the bake function from the chef::cook namespace to Python
    // Here, we specify the full C++ signature including namespaces
    m.def("bake", &chef::cook::bake, "A function that bakes dough");

    // Expose the knead function from the chef::foreplay namespace to Python
    // Similar to above, specify the full C++ signature
    m.def("knead", &chef::foreplay::knead, "A function that kneads dough");
}

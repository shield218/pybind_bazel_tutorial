// complicated_project/chef/foreplay.cpp
#include "foreplay.h"
#include "cook.h"  // Include cook header to use bake function

namespace chef {
    namespace foreplay {
        // knead calls the bake function from cook namespace and adds 5 to its result
        int knead(int dough) {
            return cook::bake(dough) + 5;
        }
    }
}

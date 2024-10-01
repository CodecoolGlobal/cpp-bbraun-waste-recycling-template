#pragma once

#include <string>

class MetalGarbage {
 public:
    std::string name;
    bool isClean;
    MetalGarbage(std::string name, bool isClean);
    void clean();
};
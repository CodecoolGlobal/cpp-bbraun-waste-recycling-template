#pragma once

#include <string>

class PlasticGarbage {
 public:
    std::string name;
    bool isClean;
    PlasticGarbage(std::string name, bool isClean);
    void clean();
};
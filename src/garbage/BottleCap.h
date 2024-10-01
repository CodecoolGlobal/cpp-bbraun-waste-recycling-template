#pragma once

#include "PlasticGarbage.h"

class BottleCap {
 public:
    std::string name;
    std::string color;
    bool isClean;
    void clean();
    BottleCap(std::string name, bool isClean, std::string color);
};
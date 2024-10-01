#pragma once

#include <string>

class PaperGarbage {
 public:
    std::string name;
    bool isSqueezed;
    PaperGarbage(std::string name, bool isSqueezed);
    void squeeze();
};
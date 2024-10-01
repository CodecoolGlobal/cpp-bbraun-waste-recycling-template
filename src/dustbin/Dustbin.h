#pragma once

#include <string>
#include <vector>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "Garbage.h"

class Dustbin {
 private:
    std::string color;
    std::vector<PaperGarbage> paperContent;
    std::vector<PlasticGarbage> plasticContent;
    std::vector<Garbage> houseWasteContent;
 public:
    std::vector<PaperGarbage> getPaperContent();
    std::vector<PlasticGarbage> getPlasticContent();
    std::vector<Garbage> getHouseWasteContent();
    void throwOutGarbage(const Garbage& garbage);
    void throwOutPaperGarbage(const PaperGarbage& paperGarbage);
    void throwOutPlasticGarbage(const PlasticGarbage& plasticGarbage);
    void emptyContents();
};
#pragma once

#include "Dustbin.h"
#include "MetalGarbage.h"
#include "BottleCap.h"

class Dustbin9000 {
 private:
   std::string color;
    std::vector<PaperGarbage> paperContent;
    std::vector<PlasticGarbage> plasticContent;
    std::vector<Garbage> houseWasteContent;

    std::vector<MetalGarbage> metalContent;
    std::vector<BottleCap> bottleCaps;
 public:
   std::vector<PaperGarbage> getPaperContent();
    std::vector<PlasticGarbage> getPlasticContent();
    std::vector<Garbage> getHouseWasteContent();
    void throwOutGarbage(const Garbage& garbage);
    void throwOutPaperGarbage(const PaperGarbage& paperGarbage);
    void throwOutPlasticGarbage(const PlasticGarbage& plasticGarbage);
    void emptyContents();

    std::vector<MetalGarbage> getMetalContent();
    std::vector<BottleCap> getBottleCaps();
    void throwOutMetalGarbage(const MetalGarbage& metalGarbage);
    void throwOutBottleCap(const BottleCap& bottleCap);
    void emptyContents9000();


    
};
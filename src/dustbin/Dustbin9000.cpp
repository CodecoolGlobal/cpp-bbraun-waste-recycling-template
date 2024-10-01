#include "Dustbin9000.h"
#include "DustbinContentError.h"
#include "BottleCapException.h"

using namespace std;

void Dustbin9000::throwOutGarbage(const Garbage& garbage){
    houseWasteContent.push_back(garbage);
}

void Dustbin9000::throwOutPaperGarbage(const PaperGarbage& paperGarbage){
    if (paperGarbage.isSqueezed){
        paperContent.push_back(paperGarbage);
    } else {
        throw DustbinContentError("Paper garbage should be squeezed!");
    }
}

void Dustbin9000::throwOutPlasticGarbage(const PlasticGarbage& plasticGarbage){
    if (plasticGarbage.isClean){
        plasticContent.push_back(plasticGarbage);
    } else {
        throw DustbinContentError("Plastic garbage should be cleaned!");
    }

}

void Dustbin9000::emptyContents(){
    paperContent.clear();
    plasticContent.clear();
    houseWasteContent.clear();
    metalContent.clear();
    bottleCaps.clear();
}

vector<PaperGarbage> Dustbin9000::getPaperContent(){
    vector<PaperGarbage> paperContentCopy = paperContent;
    return paperContentCopy;
}

vector<PlasticGarbage> Dustbin9000::getPlasticContent(){
    vector<PlasticGarbage> plasticContentCopy = plasticContent;
    return plasticContentCopy;
}

vector<Garbage> Dustbin9000::getHouseWasteContent(){
    vector<Garbage> houseWasteContentCopy = houseWasteContent;
    return houseWasteContentCopy;
}




void Dustbin9000::throwOutMetalGarbage(const MetalGarbage& metalGarbage){
    if (metalGarbage.isClean){
        metalContent.push_back(metalGarbage);
    } else {
        throw DustbinContentError("Metal garbage should be cleaned!");
    }
}

void Dustbin9000::throwOutBottleCap(const BottleCap& bottleCap){
    if (bottleCap.isClean){
        if (bottleCap.color == "pink"){
            bottleCaps.push_back(bottleCap);
        } else {
            throw BottleCapException("Only pink bottle caps can be thrown here!");
        }
    } else {
        throw BottleCapException("Bottle caps are plastic ad should be clean!");
    }
}

vector<MetalGarbage> Dustbin9000::getMetalContent() {
    vector<MetalGarbage> metalContentCopy = metalContent;
    return metalContentCopy;
}
vector<BottleCap> Dustbin9000::getBottleCaps() {
    vector<BottleCap> bottleCapsCopy = bottleCaps;
    return bottleCapsCopy;
}
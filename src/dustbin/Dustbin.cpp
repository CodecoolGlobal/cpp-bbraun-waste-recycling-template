#include "Dustbin.h"
#include "DustbinContentError.h"

using namespace std;

void Dustbin::throwOutGarbage(const Garbage& garbage){
    houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(const PaperGarbage& paperGarbage){
    if (paperGarbage.isSqueezed){
        paperContent.push_back(paperGarbage);
    } else {
        throw DustbinContentError("Paper garbage should be squeezed!");
    }
}

void Dustbin::throwOutPlasticGarbage(const PlasticGarbage& plasticGarbage){
    if (plasticGarbage.isClean){
        plasticContent.push_back(plasticGarbage);
    } else {
        throw DustbinContentError("Plastic garbage should be cleaned!");
    }

}

void Dustbin::emptyContents(){
    paperContent.clear();
    plasticContent.clear();
    houseWasteContent.clear();
}

vector<PaperGarbage> Dustbin::getPaperContent(){
    vector<PaperGarbage> paperContentCopy = paperContent;
    return paperContentCopy;
}

vector<PlasticGarbage> Dustbin::getPlasticContent(){
    vector<PlasticGarbage> plasticContentCopy = plasticContent;
    return plasticContentCopy;
}

vector<Garbage> Dustbin::getHouseWasteContent(){
    vector<Garbage> houseWasteContentCopy = houseWasteContent;
    return houseWasteContentCopy;
}
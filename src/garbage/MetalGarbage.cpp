#include "MetalGarbage.h"

using namespace std;

MetalGarbage::MetalGarbage(string name, bool isClean) : isClean(isClean), name(name){}

void MetalGarbage::clean(){
    isClean = true;
}
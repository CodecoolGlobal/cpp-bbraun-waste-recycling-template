#include "PlasticGarbage.h"

using namespace std;

PlasticGarbage::PlasticGarbage(string name, bool isClean) : isClean(isClean), name(name){}

void PlasticGarbage::clean(){
    isClean = true;
}
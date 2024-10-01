#include "BottleCap.h"

using namespace std;

BottleCap::BottleCap(string name, bool isClean, string color) : color(color), name(name), isClean(isClean){}

void BottleCap::clean(){
    isClean = true;
}
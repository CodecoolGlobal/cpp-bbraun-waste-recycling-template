#include "PaperGarbage.h"

using namespace std;

PaperGarbage::PaperGarbage(string name, bool isSqueezed) : isSqueezed(isSqueezed), name(name){}

void PaperGarbage::squeeze(){
    isSqueezed = true;
}
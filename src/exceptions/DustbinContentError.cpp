#include <iostream>
#include "DustbinContentError.h"

using namespace std;

DustbinContentError::DustbinContentError(const std::string &msg) : msg(msg) {}

void DustbinContentError::print() const {
    cerr << msg << endl;
}
#include <iostream>
#include "BottleCapException.h"

using namespace std;

BottleCapException::BottleCapException(const std::string &msg) : msg(msg) {}

void BottleCapException::print() const {
    cerr << msg << endl;
}

string BottleCapException::getMsg() const {
    return msg;
}
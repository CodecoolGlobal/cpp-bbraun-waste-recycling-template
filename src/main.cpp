#include <iostream>
#include "DustbinTests.h"
#include "Dustbin.h"
#include "DustbinContentError.h"
#include "Garbage.h"

using namespace std;

int main() {
    try {
        Garbage garbage{};
        DustbinContentError dustbinContentError{};
        Dustbin dustbin{};
        Tester tester{};
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}

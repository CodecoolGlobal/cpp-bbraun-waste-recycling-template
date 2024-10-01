#include <iostream>
#include "DustbinTests.h"

using namespace std;

int main() {
    try {
        Tester tester;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}

// Learnig C++
// NOR, NAND, XOR, NXOR logical implementation

#include <iostream>

using namespace std;

bool nandLogical(bool b1, bool b2) {
    return true;
}

bool norLogical(bool b1, bool b2) {
    return true;
}

bool xorLogical(bool b1, bool b2) {
    return true;
}

int main() {

    bool a = false;
    bool b = true;

    cout << boolalpha;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a and b = " << (a && b) << endl;
    cout << "a or b = " << (a || b) << endl;

    a = b = true;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a nor b = " << norLogical(a, b) << endl;

    a = true; b = false;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a nand b = " << nandLogical(a, b) << endl;
    
    a = b = false;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a xor b = " << xorLogical(a, b) << endl;

    cout << endl << endl;

    return(0);
}

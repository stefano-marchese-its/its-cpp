// Learnig C++
// Examples of using variables

#include <iostream>

#include <bitset>

using namespace std;

// single line comment
// declarations global int variables
int a, b = 7; // for integer operations

/*
    main of this program
    show simple arithmetic operations
*/
int main() {
    bool myBool = false;
    bool MyBool = false;
    bool my_bool = true;
    bool my_bool_123 = true;
    bool my_bool_124 = /* assign true */ true;
    /*
    bool 123_my_bool;
    bool return;
    */

    cout << "Hi there!!!" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "my_bool = " << my_bool << endl;

    my_bool = !my_bool;
    a = 7; b = 5;
    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a << endl;
    cout << "my_bool = " << my_bool << endl;

    int c = b - a;
    unsigned int d = b - a;
    cout << "b - a = " << c << endl;
    cout << "b - a = (unsigned) " << d << endl;

    bitset<16> b1(c);
    bitset<16> b2(d); 

    cout << b1.to_string() << endl;
    cout << b2.to_string() << endl;

    cout << endl << endl;

    cout << "### OPERATORS ###" << endl;
    cout << "ARITHMETIC: + - * / %" << endl;
    cout << "resto  di " << a << " con " << b << " = " << a % b << endl << endl;

    cout << "BITWISE: | & ^ ! << >>" << endl;
    b1 = a;
    b2 = b;
    cout << b1.to_string() << endl;
    cout << b2.to_string() << endl;
    cout << "bitwise or " << (b1 | b2).to_string() << endl;
    cout << "bitwise and " << (b1 & b2).to_string() << endl;
    cout << "bitwise xor " << (b1 ^ b2).to_string() << endl;
    cout << "bitwise not " << (~b1).to_string() << endl;
    cout << "bitwise shift sx " << (b1 >> 1).to_string() << endl;
    cout << "bitwise shift dx " << (b1 << 1).to_string() << endl << endl;

    cout << "LOGICAL: || && !" << endl;
    bool ba = true;
    bool bb = false;
    cout << "logical or " << boolalpha << (ba || bb) << endl;
    cout << "logical and " << boolalpha << (ba && bb) << endl;
    cout << "logical not " << boolalpha << (!ba) << endl << endl;

    cout << "RELATIONAL: == != < > <= =>" << endl;
    cout << "equal " << boolalpha << (a == b) << endl;
    cout << "not equal " << boolalpha << (a != b) << endl << endl;

    cout << "POINTER: * & ->" << endl;
    void *ptr;
    ptr = &a;
    cout << "address of a " << ptr << endl;
    cout << "address of a " << &a << endl;
    cout << "content of a " << a << endl;
    cout << "content of a " << *((int *)ptr) << endl;

    struct my_data {
        int a;
        float b;
        bool c;
    } md;

    ptr = &md;
    md.a = 100;
    md.b = 10.0f;
    md.c = true;
    cout << "a of md " << md.a << endl;
    cout << "a of md (using ptr) " << ((my_data *)ptr)->a << endl;
    my_data *ptrmd = &md;
    cout << "a of md (using ptr) " << ptrmd->a << endl;

    cout << endl << endl;

    return(0);
}
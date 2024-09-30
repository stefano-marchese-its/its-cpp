// Learning C++
// Declaration and use ofg variables

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a = 123;
    cout << a << endl;

    a = -5;
    cout << a << endl;

    a = 023;
    cout << "decimale " << a << endl;
    cout << "ottale " << oct << a << endl;
    a = 123;
    cout << "ottale " << a << endl;
    cout << "decimale " << dec << a << endl;

    a = 0xA3;
    cout << "decimale " << dec << a << endl;
    cout << "esadecimale " << hex << a << endl;
    cout << "esadecimale " << hex << uppercase << a << endl;

    a = 0b1110;
    cout << "decimale " << dec << a << endl;

    uint b = 23u;
    cout << "decimale unsigned " << dec << b << endl;

    float f = 3.12345123451234512345f;
    double d = 3.12345123451234512345;
    long double ld = 3.12345123451234512345;
    cout << "decimale " << f << endl;
    cout << "decimale " << d << endl;
    cout << "decimale " << ld << endl;

    cout << setprecision(32);

    cout << "decimale " << f << endl;
    cout << "decimale " << d << endl;
    cout << "decimale " << ld << endl;
    cout << "double " << sizeof(d) << endl;
    cout << "double " << sizeof(ld) << endl;

    char ch = 'a';
    cout << ch << endl;
    cout << ++ch << endl;
    cout << sizeof(ch) << endl;


    string str = "Stefano";
    cout << str << endl;
    cout << sizeof(str) << endl;

    str = "Stefano \
Marchese \
via Roma 8, Torino";
    cout << str << endl;
    cout << sizeof(str) << endl;


    cout << endl << endl;

    return 0;
}
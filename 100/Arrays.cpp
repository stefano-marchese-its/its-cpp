// Learning C++
// Using arrays

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {

    const size_t AGE_LEN = 4;

    int age[AGE_LEN];

    age[0] = 45;
    age[1] = 46;
    age[2] = 47;
    age[3] = 48;

    cout << "first age element " << age[0] << endl;

    float temps[] = {123.45, 123.46, 123.47};
    
    cout << "first temps element " << temps[0] << endl;

    const size_t STRING_SIZE = 64;

    char arrayString1[STRING_SIZE] = "This is a c string";
    char arrayString2[STRING_SIZE] = " second part of c string";

    cout << arrayString1 << endl;
    cout << "Length: " << strlen(arrayString1) << endl;

    strcat(arrayString1, arrayString2);

    cout << arrayString1 << endl;

    string stdString1 = "This is a c++ string";
    string stdString2 = " second part of c++ string";

    cout << stdString1 << endl;
    cout << "Length is: " << stdString1.length() << endl;
    cout << stdString1 + stdString2 << endl;

    cout << endl << endl;

    return 0;
}
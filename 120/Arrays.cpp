// Learning C++
// Using arrays

#include <iostream>

using namespace std;

// #define AGE_LEN 4

int main() {
//    const int AGE_LEN = 4;
    const size_t AGE_LEN = 4;

    int age[AGE_LEN];

    age[0] = 25;
    age[1] = 26;
    age[2] = 27;
    age[3] = 28;

    cout << "Age len = " << AGE_LEN << endl;
    cout << "Age[0] = " << age[0] << endl;
    cout << "Age[1] = " << age[1] << endl;
    cout << "Age[2] = " << age[2] << endl;
    cout << "Age[3] = " << age[3] << endl;
    cout << endl;

    float temps[] = {31.5, 28.5, 19.5};

    cout << "temps[0] = " << temps[0] << endl;
    cout << "temps[1] = " << temps[1] << endl;
    cout << "temps[2] = " << temps[2] << endl;
    cout << endl;

    float* ptrTemps = temps;
    cout << "*ptrTemps = " << *ptrTemps++ << endl;
    cout << "*ptrTemps = " << *ptrTemps++ << endl;
    cout << "*ptrTemps = " << *ptrTemps++ << endl;
    cout << endl;

    for (int i = 0; i < AGE_LEN; i++) {
        cout << "position " << i << " value " << age[i] << endl;
    }
    cout << endl;


    int len = sizeof(temps) / sizeof(temps[0]);
    cout << len << endl;
    cout << endl;
    ptrTemps = temps;
    for (int i = 0; i < len; i++) {
        cout << "position " << i << " value " << *(ptrTemps + i) << endl;
    }

    cout << endl << endl;

    return(0);
}
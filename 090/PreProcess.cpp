// Learning C++
// Preprocess directive

#include <iostream>
#include <string>
#include <cstdint>

#include "PreProcess.h"

using namespace std;

int main() {

    int32_t l = 1234567890;

#ifdef DEBUG

    cout << "This is a debug message" << endl;

#endif

    cout << "large is " << (int) l << endl;

    double radius = 5.0;
    double circleArea = radius * radius * PI;

    cout << "Area is: " << circleArea << endl;

    const double GRAVITY = 9.81;

    double mass = 10.0;
    double weight = GRAVITY * mass;

    cout << "Weight: " << weight << endl;

    cout << endl << endl;

    return 0;
}
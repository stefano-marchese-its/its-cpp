// Learning C++
// Circle

#include <iostream>
#include <cmath>

using namespace std;

#include "Circle.h"

Circle::Circle(double r) {
    radius = r;
    _name = "Circle";
}

double Circle::area() const {
    return radius * radius * M_PI;
}

void Circle::drawing() const {
    cout << _name << ": " << radius << endl;
}
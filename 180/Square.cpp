// Learning C++
// Square

#include <iostream>

using namespace std;

#include "Square.h"

Square::Square(double s) {
    side = s;
    _name = "Square";
}

double Square::area() const {
    return side * side;
}

void Square::drawing() const {
    cout << _name << ": " << side << endl;
}
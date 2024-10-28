// Learning C++
// test shape, circle, square

#include <iostream>

#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {

    Circle *cl = new Circle(10.10);
    double ac = cl->area();
    cl->drawing();
    cout << "Circle area : " << ac << endl;
    delete cl;

    Square sq = Square(10.10);
    double as = sq.area();
    sq.drawing();
    cout << "Square area : " << as << endl;

    cout << endl << endl;

    return 0;

}
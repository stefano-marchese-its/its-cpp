// Learning Shape.h
// Shape

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual void drawing() const = 0;
protected:
    string _name;
};

#endif // SHAPE_H
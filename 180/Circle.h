// Learning C++
// Circle

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double);
private:
    double radius;
public:
    double area() const override;
    void drawing() const override;
};
// Learning C++
// Square

#include "Shape.h"

class Square : public Shape {
public:
    Square(double);
private:
    double side;
public:
    double area() const override;
    void drawing() const override;
};
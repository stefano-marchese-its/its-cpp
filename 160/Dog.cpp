// Learning C++
// Dog implementation


#include "Dog.h"


Dog::Dog(string n, uint8_t a, DogType d) {
    name = n;
    age = a;
    type = d;


    return;
}  
string Dog::getName() {
    return name;
}
int Dog::getAge() {
    return (int) age;
}
int Dog::getType() {
    return (int) type;
}
void Dog::setName(string n) {
    name = n;
}
void Dog::setAge(uint8_t a) {
    age = a;
}
void Dog::setType(DogType d) {
    type = d;
}






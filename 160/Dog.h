// Learning C++
// Dog definition


#pragma once


#ifndef DOG_H
#define DOG_H


#include <string>


using namespace std;


enum class DogType {
    House,
    Hunting,
    Sheperd,
    Guard,
    Toy
};


class Dog {
public:
    Dog(string n, uint8_t a, DogType d);
    string getName();
    int getAge();
    int getType();
    void setName(string n);
    void setAge(uint8_t a);
    void setType(DogType d);
private:
    string name;
    uint8_t age;
    DogType type;
};


#endif // DOG_H




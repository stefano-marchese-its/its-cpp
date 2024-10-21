// Learning C++
// Structures


#include <iostream>


using namespace std;


enum class DogType {
    House,
    Hunting,
    Sheperd,
    Guard,
    Toy
};


struct Dog {
    string name;
    uint8_t age;
    DogType type;
};


int main() {


    cout << "STRUCTURES" << endl;


    Dog myDog;
    myDog.name = "Snoopy";
    myDog.age = 10;
    myDog.type = DogType::Guard;


    cout << myDog.name << " is type " << (int) myDog.type << endl;
    cout << myDog.name << " is " << (int) myDog.age << " year(s) old" << endl;


    Dog myDogArray[2];
    myDogArray[0].name = "Lucifer";
    myDogArray[0].age = 1;
    myDogArray[0].type = DogType::Sheperd;


    myDogArray[1].name = "Khloe";
    myDogArray[1].age = 2;
    myDogArray[1].type = DogType::Hunting;


    int len = sizeof(myDogArray) / sizeof(myDogArray[0]);
    for (int i = 0; i < len; i++) {
        cout << myDogArray[i].name << " is type " << (int) myDogArray[i].type << endl;
        cout << myDogArray[i].name << " is " << (int) myDogArray[i].age << " year(s) old" << endl;
    }


    Dog *myDogPtr = (Dog *) &myDogArray;


    cout << myDogPtr->name << " is type " << (int) myDogPtr->type << endl;
    cout << myDogPtr->name << " is " << (int) myDogPtr->age << " year(s) old" << endl;


    myDogPtr++;


    cout << myDogPtr->name << " is type " << (int) myDogPtr->type << endl;
    cout << myDogPtr->name << " is " << (int) myDogPtr->age << " year(s) old" << endl;


    myDogPtr++;


    cout << myDogPtr->name << " is type " << (int) myDogPtr->type << endl;
    cout << myDogPtr->name << " is " << (int) myDogPtr->age << " year(s) old" << endl;


    cout << endl << endl;
}


// Learning C++
// Classes


#include <iostream>
#include <vector>


#include "Dog.h"


using namespace std;


int main() {


    cout << "CLASSES" << endl;


    Dog myDog("Snoopy", 10, DogType::Guard);


    cout << myDog.getName() << " is type " << myDog.getType() << endl;
    cout << myDog.getName() << " is " << myDog.getAge() << " year(s) old" << endl;


    Dog myDogArray[2] = {
        {"Lucifer", 1, DogType::Sheperd},
        {"Khloe", 2, DogType::Hunting}
    };


    int len = sizeof(myDogArray) / sizeof(myDogArray[0]);
    for (int i = 0; i < len; i++) {
        cout << myDogArray[i].getName() << " is type " << myDogArray[i].getType() << endl;
        cout << myDogArray[i].getName() << " is " << myDogArray[i].getAge() << " year(s) old" << endl;
    }


    Dog *myDogPtr = (Dog *) &myDogArray;
    myDogPtr->setName("Cannella");
    myDogPtr->setAge(0);
    myDogPtr->setType(DogType::Toy);


    for (int i = 0; i < len; i++) {
        cout << myDogArray[i].getName() << " is type " << myDogArray[i].getType() << endl;
        cout << myDogArray[i].getName() << " is " << myDogArray[i].getAge() << " year(s) old" << endl;
    }


    vector<Dog> myDogVector;


    cout << "Size of the vector " << myDogVector.size() << endl;


    myDogVector.push_back(Dog("Snoopy", 10, DogType::Guard));
    myDogVector.push_back(Dog("Lucifer", 10, DogType::Guard));
    myDogVector.push_back(Dog("Khloe", 10, DogType::Guard));


    cout << "Size of the vector " << myDogVector.size() << endl;


    for (auto &element : myDogVector) {
        cout << element.getName() << endl;
    }


    cout << endl << endl;
}




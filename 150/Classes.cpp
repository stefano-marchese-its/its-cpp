// Learning C++
// Classes


#include <iostream>


using namespace std;


enum class DogType {
    House,
    Hunting,
    Sheperd,
    Guard,
    Toy
};


/*
struct Dog {
    string name;
    uint8_t age;
    DogType type;
};
*/


class Dog {
public:
    Dog() {


    }


    Dog(string n, uint8_t a, DogType d) {
        name = n;
        age = a;
        type = d;


        return;
    }  


    string getName() {
        return name;
    }
    int getAge() {
        return (int) age;
    }
    int getType() {
        return (int) type;
    }
    void setName(string n) {
        name = n;
    }
    void setAge(uint8_t a) {
        age = a;
    }
    void setType(DogType d) {
        type = d;
    }
protected:
    string family;
private:
    string name;
    uint8_t age;
    DogType type;
};


class DogSpecialized : public Dog {
    DogSpecialized(string f) {
        family = f;
    }
    DogSpecialized(string n, uint8_t a, DogType d, string f) : Dog(n,a,d) {
        family = f;
    }
    string getFamily() {
        return family;
    }
    void setFamily(string f) {
        family = f;
    }
};


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


    cout << endl << endl;
}

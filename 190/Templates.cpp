// Learning C++
// Templates examples

#include <iostream>

using namespace std;

#define MY_ENDL cout << endl << endl

template <typename T>
T myMax(T a, T b) {
    return ( a > b ) ? a : b;
}

template <typename T>
class Array {
public:
    // constructor
    Array(int size) : _size(size) {
        _data = new T[size];
    }

    ~Array() {
        delete[] _data;
    }

    T& operator[](int index) {
        return _data[index];
    }

    int size() {
        return _size;
    }
private:
    T* _data;
    int _size;
};

int main() {

    int myInt = myMax<int>(12, 34);

    cout << "max between 12 and 34 is " << myInt << endl;
    MY_ENDL;

    double myDouble = myMax<double>(12.12, 34.34);
    cout << "max between 12.12 and 34.34 is " << myInt << endl;
    MY_ENDL;

    Array<int> myArrayI(5);
    myArrayI[0] = 10;
    myArrayI[1] = 11;
    cout << "first element is " << myArrayI[0] << endl;
    cout << "second element is " << myArrayI[1] << endl;
    cout << "the size " << myArrayI.size() << endl;
    MY_ENDL;

    Array<double> myArrayD(15);
    myArrayD[0] = 10.10;
    myArrayD[1] = 11.11;
    cout << "first element is " << myArrayD[0] << endl;
    cout << "second element is " << myArrayD[1] << endl;
    cout << "the size " << myArrayD.size() << endl;
    MY_ENDL;

    Array<string> myArrayS(20);
    myArrayS[0] = "10.10";
    myArrayS[1] = "11.11";
    cout << "first element is " << myArrayS[0] << endl;
    cout << "second element is " << myArrayS[1] << endl;
    cout << "the size " << myArrayS.size() << endl;
    MY_ENDL;
}
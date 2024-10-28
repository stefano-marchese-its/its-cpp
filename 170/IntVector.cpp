// Learning C++
// Vectors

#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

bool myCompare(int a, int b) {
    return (a < b*10);
}

int main() {
    vector<int> myVector;

    cout << "The vector has " << myVector.size() << " elements" << endl;

    myVector.push_back(1);
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(5);
    myVector.push_back(8);
    myVector.push_back(13);

    cout << "Now, the vector has " << myVector.size() << " elements" << endl;

    cout << "The element at index 0 is " << myVector[0] << endl;
    myVector[0] = 1234;
    cout << "The element at index 0 is " << myVector[0] << endl;

    cout << "The element at index 1 is " << myVector.at(1) << endl;
    myVector.at(1) = 1234;
    cout << "The element at index 1 is " << myVector.at(1) << endl;

    myVector.clear();

    cout << "Finally, the vector has " << myVector.size() << " elements" << endl;

    myVector.push_back(2);
    myVector.push_back(-3);
    myVector.push_back(-5);
    myVector.push_back(1);
    myVector.push_back(1);
    myVector.push_back(8);
    myVector.push_back(-13);

    cout << "Now, the vector has " << myVector.size() << " elements" << endl;

    cout << "The elements are... " << endl;

    for (auto element : myVector) {
        cout << element << endl;
    }

    cout << "The elements are... (reference)" << endl;

    for (auto &element : myVector) {
        cout << element << endl;
    }

    cout << "The elements are... (iterator)" << endl;

    // vector<int>::iterator idx;
    vector<int>::const_iterator idx;
    for (idx = myVector.begin(); idx != myVector.end(); idx++) {
        cout << (*idx) << endl;
        // (*idx)++;
    }

    cout << "The elements are... (reverse iterator)" << endl;

    vector<int>::reverse_iterator ridx;
    for (ridx = myVector.rbegin(); ridx != myVector.rend(); ridx++) {
        cout << (*ridx) << endl;
    }

    /* exception
    cout << "The elements are... (error iterator)" << endl;

    for (idx = myVector.end(); idx != myVector.begin(); idx++) {
        cout << (*idx) << endl;
    }
    /* */

    sort(myVector.begin(), myVector.end());

    cout << "The elements are sorted..." << endl;

    for (auto &element : myVector) {
        cout << element << endl;
    }

    /*
    sort(myVector.begin(), myVector.end(), [](int a, int b) {
        return abs(a) < abs(b);
    }); /**/

    /*
    auto myCompare = [](int a, int b) {
        return abs(a) > abs(b);
    }; /**/

    sort(myVector.begin(), myVector.end(), myCompare);

    cout << "The elements are abs sorted..." << endl;

    for (auto &element : myVector) {
        cout << element << endl;
    }

    cout << endl << endl;

    return(0);
}

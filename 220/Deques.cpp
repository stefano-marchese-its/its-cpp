// Learning C++
// Deque examples

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define MY_ENDL cout << endl << endl

int main() {

    deque<int> myDeque;

    for (int i = 0; i < 11; ++i) {
        myDeque.push_back(i);
    }

    for (auto& d : myDeque) {
        cout << d << " ";
    }
    MY_ENDL;

    for (int i = 0; i < 11; ++i) {
        myDeque.push_front(i);
    }

    for (auto& d : myDeque) {
        cout << d << " ";
    }
    MY_ENDL;

    myDeque.pop_back();
    myDeque.pop_front();

    for (auto& d : myDeque) {
        cout << d << " ";
    }
    MY_ENDL;

    myDeque.push_back(99);
    myDeque.push_front(9999);

    for (auto& d : myDeque) {
        cout << d << " ";
    }
    MY_ENDL;

    reverse(myDeque.begin(), myDeque.end());

    for (auto& d : myDeque) {
        cout << d << " ";
    }
    MY_ENDL;

    MY_ENDL;
    
}
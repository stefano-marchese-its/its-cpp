// Learning C++
// Iterators examples

#include <iostream>
#include <vector>

using namespace std;

#define MY_ENDL cout << endl << endl

int main() {

    vector<int> numbers = {1, 2, 3, 4, 5};

    // iterator
    vector<int>::iterator idx = numbers.begin();
    cout << "the content of the first element is " << *idx << endl;
    *idx = 100;
    MY_ENDL;

    vector<int>::const_iterator cidx = numbers.begin();
    cout << "the content of the first element is " << *cidx << endl;
    MY_ENDL;

    idx = numbers.begin();
    while (idx != numbers.end()) {
        cout << *idx << " ";
        ++idx;
    }
    MY_ENDL;

    idx = numbers.end();
    do {
        --idx;
        cout << *idx << " ";
    }
    while (idx != numbers.begin());
    MY_ENDL;

    *(numbers.begin() + 2) = 300;

    idx = numbers.end();
    do {
        --idx;
        cout << *idx << " ";
    }
    while (idx != numbers.begin());
    MY_ENDL;
    
}
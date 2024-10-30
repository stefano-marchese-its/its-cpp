// Learning C++
// Lists examples

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

#define MY_ENDL cout << endl << endl

int main() {

    list<int> numbers = {1, 23, 3, 4, 5, 6, 6, 7, 8, 8, 8, 8};
    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    numbers.push_back(1000);
    numbers.push_back(1000);

    numbers.push_front(99);

    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    auto idx = numbers.begin();
    advance(idx, 2);
    numbers.insert(idx, 5555);

    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    idx = find_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0 && num > 5;
    });

    if ( idx != numbers.end() ) {
        cout << "found " << *idx;
    }
    else {
        cout << "not found";
    }

    MY_ENDL;
    
}
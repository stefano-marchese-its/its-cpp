// Learning C++
// Queues examples

#include <iostream>
#include <queue>

using namespace std;

inline void my_endl() {cout << endl << endl;}

inline void check_empty(queue<int>& numbers) {
    if (numbers.empty()) {
        cout << "numbers is empty!!!";
    }
    else {
        cout << "numbers is not empty!!!";
    }
    my_endl();
}

int main() {

    queue<int> numbers;

    numbers.push(1200);
    numbers.push(12);
    numbers.push(13);
    numbers.push(14);
    numbers.push(15);
    numbers.push(16);
    numbers.push(17);

    cout << "Front element: " << numbers.front();
    my_endl();

    numbers.pop();

    cout << "Front element: " << numbers.front();
    my_endl();

    check_empty(numbers);

    while (!numbers.empty()) {
        cout << numbers.front() << " ";
        numbers.pop();
    }
    my_endl();

    check_empty(numbers);

    my_endl();

    return 0;    
}
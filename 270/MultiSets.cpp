// Learning C++
// Sets examples

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

inline void my_endl() {cout << endl << endl;}

template <typename T>
inline void print_set (multiset<T>& numbers) {
    for (auto& n : numbers) {
        cout << n << " "; 
    }
    my_endl();
}

int main() {

    multiset<int> numbers = {10};

    numbers.insert(11);
    numbers.insert(12);
    numbers.insert(13);
    numbers.insert(14);
    numbers.insert(15);
    numbers.insert(16);
    numbers.insert(11);
    numbers.insert(11);
    numbers.insert(11);
    numbers.insert(11);

    print_set(numbers);

    int fn = 11;
    int countNumber = count(numbers.begin(), numbers.end(), fn);
    cout << "number 11: " << countNumber;
    my_endl();

    numbers.erase(11);

    print_set(numbers);

    countNumber = count(numbers.begin(), numbers.end(), fn);
    cout << "number 11: " << countNumber;
    my_endl();

    auto it = numbers.find(14);
    numbers.erase(it, numbers.end());

    print_set(numbers);

    return 0;    
}
// Learning C++
// Sets examples

#include <iostream>
#include <set>

using namespace std;

inline void my_endl() {cout << endl << endl;}

template <typename T>
inline void print_set (set<T>& numbers) {
    for (auto& n : numbers) {
        cout << n << " "; 
    }
    my_endl();
}

int main() {

    set<int> numbers = {10};

    numbers.insert(11);
    numbers.insert(12);
    numbers.insert(13);
    numbers.insert(14);
    numbers.insert(15);
    numbers.insert(16);
    numbers.insert(11);

    print_set(numbers);

    if (numbers.count(11) > 0) {
        cout << "Found number 11";
    }
    else {
        cout << "Not found number 11";
    }
    my_endl();

    if (numbers.count(20) > 0) {
        cout << "Found number 20";
    }
    else {
        cout << "Not found number 20";
    }
    my_endl();

    auto it = numbers.begin();
    cout << "Min: " << (*it);
    my_endl();

    it = numbers.end();
    --it;
    cout << "Max: " << (*it);
    my_endl();

    set<string> names = {"Pippo", "Paperoga", "Paperone"};
    names.insert("Topolino");
    print_set(names);

    return 0;    
}
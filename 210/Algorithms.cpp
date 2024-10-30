// Learning C++
// Algorithm examples

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MY_ENDL cout << endl << endl

bool compareD(int a, int b) {
    return a > b;
}

int main() {

    vector<int> numbers = {3, 1, -10, -20, -3};
    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    sort(numbers.begin(), numbers.end());
    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    sort(numbers.begin(), numbers.end(), compareD);
    for (auto& n : numbers) {
        cout << n << " ";
    }
    MY_ENDL;

    auto idx = find(numbers.begin(), numbers.end(), -10);
    if (idx != numbers.end()) {
        cout << "found " << *idx;
    }
    else {
        cout << "not found " << *idx;
    }
    MY_ENDL;

    idx = find(numbers.begin(), numbers.end(), -99);
    if (idx != numbers.end()) {
        cout << "found " << *idx;
    }
    else {
        cout << "not found !!!";
    }
    MY_ENDL;

    vector<int> newNumbers(numbers.size());
    copy(numbers.begin(), numbers.end(), newNumbers.begin());
    for (auto& n : newNumbers) {
        cout << n << " ";
    }

    MY_ENDL;
    
}
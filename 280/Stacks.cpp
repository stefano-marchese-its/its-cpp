// Learning C++
// Stacks examples

#include <iostream>
#include <stack>

using namespace std;

inline void my_endl() {cout << endl << endl;}

void bynaryConvertion(int num) {
    stack<int> bin;

    int n = num;
    while (n > 0) {
        bin.push(n % 2);
        n /= 2;
    }

    cout << "bin size: " << bin.size() << endl;

    cout << "num --> ";
    while (!bin.empty()) {
        cout << bin.top();
        bin.pop();
    }
    my_endl();

    return;
}

int main() {

    int dec = 1025;

    bynaryConvertion(dec);

    bynaryConvertion(dec * 2);

    my_endl();

    return 0;    
}
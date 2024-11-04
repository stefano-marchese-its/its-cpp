// Learning C++
// Priority Queues examples

#include <iostream>
#include <queue>
#include <string>

using namespace std;

inline void my_endl() {cout << endl << endl;}

class Person {
public:
    string name;
    int age;

    bool operator<(const Person& other) const {
        return age < other.age;
    }
};


int main() {

    priority_queue<int> numbers;

    numbers.push(40);
    numbers.push(140);
    numbers.push(30);
    numbers.push(200);
    numbers.push(10);

    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    my_endl();

    priority_queue<int, vector<int>, greater<int>> rnumbers;

    rnumbers.push(40);
    rnumbers.push(140);
    rnumbers.push(30);
    rnumbers.push(200);
    rnumbers.push(10);

    while (!rnumbers.empty()) {
        cout << rnumbers.top() << " ";
        rnumbers.pop();
    }
    my_endl();

    priority_queue<Person> people;

    Person p1 = {"Bob", 10};
    Person p2 = {"Alice", 20};
    Person p3 = {"Charlie", 30};

    people.push(p1);
    people.push(p2);
    people.push(p3);

    while (!people.empty()) {
        Person p = people.top(); 
        cout << p.name << "-" << p.age << endl;
        people.pop();
    }
    my_endl();

    cout << "people size: " << people.size();

    my_endl();

    return 0;    
}
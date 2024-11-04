// Learning C++
// Maps examples

#include <iostream>
#include <map>
#include <string>

using namespace std;

#define MY_ENDL cout << endl << endl

inline void my_endl() {cout << endl << endl;}

inline void print_grades(map<string, int>& grades) {
    for (auto& gr : grades) {
        cout << gr.first << "-" << gr.second << " ";
    }
    my_endl();
}

int main() {

    map<string, int> grades;

    grades["Pippo"] = 9;
    grades["Paperino"] = 10;
    grades["Topolino"] = 9;

    grades.insert({"Paperoga", 7});

    grades.insert(pair<string,int>("Paperone", 10));

    grades["Paperone"] = 20;

    print_grades(grades);

    cout << "Paperone grade: " << grades["Paperone"];
    my_endl();

    if (grades.find("Paperino") != grades.end()) {
        cout << "Paperino found!!!";
    }
    else {
        cout << "Paperino not found!!!";
    }
    my_endl();

    if (grades.find("Gastone") != grades.end()) {
        cout << "Gastone found!!!";
    }
    else {
        cout << "Gastone not found!!!";
    }
    my_endl();

    grades.erase("Paperone");
    cout << "Paperone erase" << endl;
    print_grades(grades);

    return 0;    
}
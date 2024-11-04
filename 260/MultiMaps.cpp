// Learning C++
// MultiMaps examples

#include <iostream>
#include <map>
#include <string>

using namespace std;

inline void my_endl() {std::cout << endl << endl;}

inline void print_grades(multimap<string, int>& grades) {
    for (auto& gr : grades) {
        std::cout << gr.first << "-" << gr.second << " ";
    }
    my_endl();
}

int main() {

    multimap<string, int> grades;

    grades.insert({"Pippo", 9});
    grades.insert({"Paperino", 10});
    grades.insert({"Topolino", 8});
    grades.insert({"Paperoga", 7});

    grades.insert(pair<string,int>("Paperone", 10));
    grades.insert(pair<string,int>("Paperone", 7));
    grades.insert(pair<string,int>("Paperone", 6));

    print_grades(grades);

    auto range = grades.equal_range("Paperone");
    cout << "Grades Paperone:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    my_endl();

    for (auto it = grades.find("Paperone"); it != grades.end(); ++it) {
        if (it->second == 6) {
            grades.erase(it);
            break;
        }
    }

    print_grades(grades);

    my_endl();

    return 0;    
}
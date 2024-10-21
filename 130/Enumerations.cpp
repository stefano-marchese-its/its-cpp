// Learning C++
// Enumeration


#include <iostream>


using namespace std;


enum cow_specialization {diary, meat, hide, pet};
enum cow2_specialization {_diary, _meat, _hide, _pet};


enum class ccow_specialization {diary, meat, hide, pet};
enum class ccow2_specialization {diary, meat, hide, pet};


int main() {


    cout << "ENUMERATION" << endl;


    cow_specialization cs = diary;
    int meat = 10;


    cout << cs << endl;
    cs = hide;
    cout << cs << endl;
    cout << meat << endl;


    ccow_specialization ccs = ccow_specialization::diary;
    ccow2_specialization cc2s = ccow2_specialization::pet;


    cout << (int) ccs << endl;
    cout << (int) cc2s << endl;


    int a = 0;


    if (a == (int) ccow2_specialization::diary) {
        cout << "a is diary" << endl;
    }
    else {
        cout << "a is not diary" << endl;
    }


    cout << endl << endl;
}

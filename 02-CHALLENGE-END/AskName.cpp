// Learning C++
// ask the name of the user
// and print a message with the name just inserted

#include <iostream>
#include <string>

using namespace std;

int main () {
    string name;

    cout<< "What's ur name bb?"<<endl;
    cin >> name;
    cout<<"Nice name, %s",name;

    return(0);
}

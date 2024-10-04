// Learning C++
// type interface of variables using auto

#include <iostream>
#include <typeinfo>

using namespace std;

int main () {

    auto a = 7;
    auto b = 123456789012345;
    auto c = 12.34f;
    auto d = 12.34;
    auto e = true;
    auto f = 'a';
    auto g = "abcd";

    cout << a << " the type is " << typeid(a).name() << endl;
    cout << b << " the type is " << typeid(b).name() << endl;
    cout << c << " the type is " << typeid(c).name() << endl;
    cout << d << " the type is " << typeid(d).name() << endl;
    cout << e << " the type is " << typeid(e).name() << endl;
    cout << f << " the type is " << typeid(f).name() << endl;
    cout << g << " the type is " << typeid(g).name() << endl;

    cout << endl << endl;

    return 0;
}
// Learning C++
// All about macros

#include <iostream>

#include "Macros.h"
#include "Macros.h"

using namespace std;

#define MAX_INTS 5
#define MAX_FLOATS 12.22

#define DEBUG

#define VERSION 2

int main() {

#ifdef DEBUG
    cout << "debug code" << endl;
#else
    cout << "release code" << endl;
#endif

#if VERSION == 1
    cout << "VERSION 1" << endl;
#elif VERSION == 2
    cout << "VERSION 2" << endl;
#else
    cout << "VERSION 3" << endl;
#endif

#undef DEBUG
#define NDEBUG

#ifdef DEBUG
    cout << "debug code" << endl;
#else
    cout << "release code" << endl;
#endif

#define ERROR 0
#if ERROR == 1
#error "there is an error in this code"
#endif

#define WARNING 0 
#if WARNING == 1
#warning "there is a warning in this code"
#endif

#pragma region 
    cout << "line: " << __LINE__ << endl;
    cout << "file: " << __FILE__ << endl;
    cout << "date: " << __DATE__ << endl;
    cout << "time: " << __TIME__ << endl;
#pragma endregion

#define TO_STRING(x) #x

    cout << "to string: " << TO_STRING(1234) << endl;

#define MY_CONCAT(x,y) int x##y

    MY_CONCAT(my,Var);
    myVar = 0;
    cout << myVar << endl;

#define MY_ARGS(...) cout << #__VA_ARGS__

    MY_ARGS(1, 2, 3, 4, 5);

    cout << endl << endl;
}
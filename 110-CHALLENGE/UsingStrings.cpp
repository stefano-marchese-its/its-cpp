// Learning C++
// Strings examples, in C and C++

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// return length
int findLength(char* str) {
    int len = 0;

    return len;
}

int findLength(string str) {
    int len = 0;

    return len;
}

// concat string
char* concatString(char* str1, char* str2)
{
    return str1;
}

string concatString(string str1, string str2)
{
    return str1;
}

// find pos of a char
int findCharPos(char* str, char ch) {
    int pos = 0;

    return pos; 
}

int findCharPos(string str, char ch) {
    int pos = 0;

    return pos;
}

// to upper case
char *toUpperCase(char *str) {
    
    return str;
}

string toUpperCase(string str) {
    
    return str;
}

// to lower case
char *toLowerCase(char *str) {
    
    return str;
}

string toLowerCase(string str) {
    
    return str;
}

int main() {
    const size_t LENGHT1 = 32;

    // your name
    char cStr[LENGHT1] = "Stefano";

    // your home town
    string stdStr = "Torino";

    cout << cStr << endl;
    cout << stdStr << endl;

    cout << "LENGTH" << endl;
    cout << cStr << " length: " << findLength(cStr) << endl;
    cout << stdStr << " length: " << findLength(stdStr) << endl;

    cout << "CONCAT" << endl;
    cout << cStr << " concat with Hi: " << concatString(cStr, "Hi!!!") << endl;
    cout << stdStr << " concat with Hi: " << concatString(stdStr, "Hi!!!") << endl;
    cout << cStr << endl;

    cout << "POS" << endl;
    cout << cStr << " position of a: " << findCharPos(cStr, 'a') << endl;
    cout << stdStr << " position of o: " << findCharPos(stdStr, 'o') << endl;

    cout << "TO UPPER CASE" << endl;
    cout << cStr << " to upper case: " << toUpperCase(cStr) << endl;
    cout << stdStr << " to upper case: " << toUpperCase(stdStr) << endl;

    cout << endl << endl;

    return(0);
}
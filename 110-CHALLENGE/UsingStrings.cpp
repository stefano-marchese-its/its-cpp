// Learning C++
// Strings examples, in C and C++

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// return length
int findLength(char* str) {
    int len = 0;
    len = strlen(str);
    return len;
}

int findLength(string str) {
    int len = 0;
    len = str.length();
    return len;
}

// concat string
char* concatString(char* str1, char* str2)
{
    strcat (str1, str2);
    return str1;
}

string concatString(string str1, string str2)
{
    str1 += str2;
    return str1;
}

// find pos of a char
int findCharPos(char* str, char ch) {
    int pos = 0;
    for (pos; pos<strlen(str); pos++){
        if (str[pos] == ch)
            break;
    }

    return pos; 
}

int findCharPos(string str, char ch) {
    int pos = 0;
    pos = str.find(ch);
    return pos;
}

// to upper case
char *toUpperCase(char *str) {
    for (int pos = 0; pos<strlen(str); pos++){
        str[pos] = toupper(str[pos]);
    }
    return str;
}

string toUpperCase(string str) {
    for (int pos = 0; pos<str.length(); pos++){
        str[pos] = toupper(str[pos]);
    }
    return str;
}

// to lower case
char *toLowerCase(char *str) {
    for (int pos = 0; pos<strlen(str); pos++){
        str[pos] = tolower(str[pos]);
    }
    return str;
}

string toLowerCase(string str) {
    for (int pos = 0; pos<str.length(); pos++){
        str[pos] = tolower(str[pos]);
    }
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
    cout << stdStr << " length: " << findLength(stdStr) << endl << endl;

    cout << "CONCAT" << endl;
    cout << cStr << " concat with Hi: " << concatString(cStr, "Hi!!!") << endl;
    cout << stdStr << " concat with Hi: " << concatString(stdStr, "Hi!!!") << endl << endl;
    cout << cStr << endl;

    cout << "POS" << endl;
    cout << cStr << " position of a: " << findCharPos(cStr, 'a') << endl;
    cout << stdStr << " position of o: " << findCharPos(stdStr, 'o') << endl << endl;

    cout << "TO UPPER CASE" << endl;
    cout << cStr << " to upper case: " << toUpperCase(cStr) << endl;
    cout << stdStr << " to upper case: " << toUpperCase(stdStr) << endl << endl;

    cout << "TO LOWER CASE" << endl;
    cout << cStr << " to lower case: " << toLowerCase(cStr) << endl;
    cout << stdStr << " to lower case: " << toLowerCase(stdStr) << endl;

    cout << endl << endl;

    return(0);
}
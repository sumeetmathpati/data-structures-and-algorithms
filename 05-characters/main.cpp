#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char charArr[10];
    
    cout << "Enter string: ";
    cin >> charArr;

    // Character array is printed as a string by cout.
    // Cout prints the characters until it encounters '\0'.
    cout << "Hello " << charArr << endl;

    charArr[0] = 'a';
    charArr[1] = 'b';
    charArr[2] = 'c';
    charArr[3] = 'd';
    charArr[4] = '\0';
    charArr[5] = 'e';
    charArr[6] = 'f';

    cout << "New string is " << charArr << endl;
    // The length of the string is 4
    cout << "Length of the string is " << strlen(charArr);
    
    
}
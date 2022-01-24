#include <iostream>
#include <cstring>  

using namespace std;

int main() {
    
    char str1[100];
    char str2[100];
    char str3[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // strlen
    cout << "The length of the first string is " << strlen(str1) << endl;

    // strcmp
    if (strcmp(str1, str2)) {
        cout << "Both the strings are different" << endl;
    } else {
        cout << "Both the strings are same." << endl;
    }

    // strcpy
    strcpy(str3, str1);
    cout << "Third string is: " << str3 << endl;

    // strncpy
    // This functions does not copy null character unless it's counted in n.
    strncpy(str3, str1, 3);
    cout << "now the third string is: " << str3 << endl;

}
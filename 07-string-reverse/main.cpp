#include <iostream>
#include <string.h>

using namespace std;

void reverse(char str[], int n) {
    int c = 0;
    char tmp;

    for (int i = 0, j = n-1; i < j; i++, j--) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

int main() {
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
    char str[100];

    cin.getline(str, 100);
    reverse(str, strlen(str));

    cout << "Reversed string: " << str;
}
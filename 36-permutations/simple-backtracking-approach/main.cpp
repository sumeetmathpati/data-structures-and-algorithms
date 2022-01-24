/*

Print all the permutations of a string.

This approach prints duplicatte permutations if
the string contains duplicate characters.

*/

#include <iostream>

using namespace std;

void swap(char *ch, char *ch2) {
    char tmp = *ch;
    *ch = *ch2;
    *ch2 = tmp;
}

void printPermutations(string str, int l, int r) {
    
    if (l == r) {
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            
            swap(str[l], str[i]);
            printPermutations(str, l+1, r);

            // Restore the origional array back, i.e. backtracking.
            swap(str[i], str[l]);
        }
    }

}

int main() {

    string input;

    cin >> input;

    printPermutations(input, 0, input.size()-1);

    return 0;
}
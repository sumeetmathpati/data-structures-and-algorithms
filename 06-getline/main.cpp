/*

cin can't get strings with spaces as input, hence we use getline.

getline() takes 3 inputs. getline(str, n [, ])

getline() receives input until it reads \n (exclusing). From the receieved input, n-1 characters it stores
in the str, and append '\0' at the end.

*/

#include <iostream>

using namespace std;

int main() {

    char input[4];
    // Getline will receive 3 chars and append '\0' at the end.
    cin.getline(input, 4);
    cout << input;

    return 0;
}
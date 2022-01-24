#include <iostream>

using namespace std;

int main() {

    int a[10];
    a[0] = 10;
    a[1] = 20;
    // Remaining values of a will be garbage values. 

    // Other elements will be set to 0.
    int b[10] = {10, 20};

    cout << "Size of array a in bytes is " << sizeof(a) << endl;
    cout << "Elements in array a is " << sizeof(a)/sizeof(a[0]) << endl;

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
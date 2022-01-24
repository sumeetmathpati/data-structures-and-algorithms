#include <iostream>

using namespace std;

int factorialRecursive(int n) {

    if (n == 0) {
        return 1;
    }

    return n * factorialRecursive(n-1);
}

int factorialIterative(int n) {

    int fact = 1;

    while (n > 0) {
        fact = fact * n;
        n--;
    }

    return fact;
}

int main() {
    
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorialRecursive(n) << endl;

    return 0;
}
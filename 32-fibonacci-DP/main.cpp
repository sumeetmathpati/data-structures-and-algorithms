#include <iostream>
#include <unordered_map>

using namespace std;

int fibonacci(int n, unordered_map<int, int> fib) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    if (fib.count(n) == 0) {
        return fibonacci(n-1, fib) + fibonacci(n-2, fib);
    }

    return -1;
}

int main() {

    int n;
    unordered_map<int, int> fib;

    cin >> n;

    cout << fibonacci(n, fib);

}
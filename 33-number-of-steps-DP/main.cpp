/*

Given a number, count the minimum number of steps/operations 
we need to perform to make that number equal to 1.

Operations:
- Decrement by 1.
- Given n, n = n/2 if n%2 == 0
- Given n, n = n/3 if n%3 == 0

*/

#include <iostream>
#include <unordered_map>

using namespace std;

int getSteps(int n, unordered_map<int, int> steps) {
    int tmp;

    if (n == 1) {
        return 0;
    } else {
        if (steps.count(n) != 0) {
            return steps[0];
        }
        if (n%3 == 0) { 
            n = n/3;
            tmp = 1 + getSteps(n, steps);
            steps.insert(pair<int, int>(n, tmp));
            return tmp;
        } else if (n%2 == 0) { 
            n = n/2;
            tmp = 1 + getSteps(n, steps);
            steps.insert(pair<int, int>(n, tmp));
            return tmp;
        } else { 
            n = n - 1;
            tmp = 1 + getSteps(n, steps);
            steps.insert(pair<int, int>(n, tmp));
            return tmp;
        }
    }
}

int main() {

    unordered_map<int, int> steps;

    int n = 7;
    cin >> n;

    cout << getSteps(n, steps);

}
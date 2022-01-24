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

void printMap(unordered_map<int, int> steps) {
    for (int i = 0; i < steps.size(); i++) {
        cout << steps[i] << " ";
    }
}

int getSteps(int n) {
    int tmp;
    unordered_map<int, int> steps;

    steps.insert(pair<int, int>(1, 0));

    for (int i = 1; i <= n; i++) {
        
        if (steps.count(i) != 0) {
            continue;
        } else {
            if (i % 3 == 0) {
                tmp = i/3;
                steps.insert(pair<int, int>(i, 1 + steps[tmp]));
            } else if (i % 2 == 0) {
                tmp = i/2;
                steps.insert(pair<int, int>(i, 1 + steps[tmp]));
            } else {
                tmp = i - 1;
                steps.insert(pair<int, int>(i, 1 + steps[tmp]));
            }
        }

    }

    return steps[n];
}

int main() {

    int n = 7;
    cin >> n;

    cout << getSteps(n);

}
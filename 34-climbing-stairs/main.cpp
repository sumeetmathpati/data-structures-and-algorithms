/*

Count the number of steps we have to take to reach n stairs using
only two types of step taking:
1. Cross single stair at a time.
2. Cross two stairs at a time.

Example
1. If n == 2, we can cross stairs in 2 ways.
2. If n == 3, we can cross stairs in 3 ways.

We shall get a fibinacci series.

*/

#include <iostream>
#include <unordered_map>

using namespace std;

int countStairs(int n, unordered_map<int, int> stairCount) {

    int tmp;

    if (n == 1 || n == 0) {
        return 1;
    } else {
        if (stairCount.count(n) != 0) {
            return stairCount[n];
        } else {
            tmp = countStairs(n-1, stairCount) + countStairs(n-2, stairCount);
            stairCount[n] = tmp;
            return tmp;
        }
    }
}

int main() {

    unordered_map<int, int> stairCount;

    int n;

    cin >> n;

    cout << countStairs(n, stairCount);

    return 0;
}
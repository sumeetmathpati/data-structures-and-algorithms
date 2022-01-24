#include <iostream>

using namespace std;

void printIndices(int arr[], int n, int sum) {

    int wStart = 0;
    int wEnd = 0;
    int tmp = 0;
    int windowSum;

    int prefixSum[n];

    for (int i = 0; i < n; i++) {
        tmp += arr[i];
        prefixSum[i] = tmp;
    }



    while (wEnd < n && wStart <= wEnd) {

        if (wStart == wEnd && prefixSum[wStart] == sum) {
            cout << wStart << " " << wEnd << endl;
            wEnd++;
        } else {
            windowSum = prefixSum[wEnd] - (wStart != 0 ? prefixSum[wStart-1] : 0);
            if (windowSum == sum) {
                cout << wStart << " " << wEnd << endl;
                wEnd++;
            } else if (windowSum > sum) {
                wStart++;
            } else {
                wEnd++;
            }
        }
    }

}

int main() {

    int n;

    cin >> n;

    int inputs[n];

    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }

    int sum;
    cin >> sum;

    printIndices(inputs, n, sum);

    return 0;
}
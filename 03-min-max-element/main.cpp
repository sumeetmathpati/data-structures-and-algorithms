#include <iostream>

using namespace std;

int *minMaxElement(int arr[], int n) {
    int max = INT32_MIN;
    int min = INT32_MAX;
    int *res = new int(2);

    for (int i = 0; i < n; i++) {
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }

    res[0] = min;
    res[1] = max;
    return res;
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // In this code, we're creating dynamic array.
    int *arr = new int(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *result = minMaxElement(arr, n);
    cout << "The minimum element in an array is " << result[0] << endl;
    cout << "The maximum element in an array is " << result[1];

    return 0;
}
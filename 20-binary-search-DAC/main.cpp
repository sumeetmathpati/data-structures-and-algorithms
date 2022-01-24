#include <iostream>

using namespace std;

int binarySearch(int *arr, int l, int r, int x) {

    if (l == r) {
        if (arr[r] == x) {
            return r;
        } else {
            return -1;
        }
    }

    int mid = (l+r) / 2;

    if (arr[mid] == x) {
        return mid;
    }

    if (arr[mid] > x) {
        return binarySearch(arr, l, mid-1, x);
    } else {
        return binarySearch(arr, mid+1, r, x);
    }

    return -1;

}

int main() {

    int n;
    int k;
    int res;

    cout << "Enter the number of elements: ";
    cin >> n;

    // The variable sized array is only possible in C99.
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter " << n << " element (in sorted order) to search: " << endl;
    cin >> k;

    res = binarySearch(arr, 0, n-1, k);

    if (res >= 0) {
        cout << "Element is present at index " << res << "." << endl;
    } else {
        cout << "Element is NOT present." << endl;
    }


}
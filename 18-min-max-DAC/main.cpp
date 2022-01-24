#include <iostream>

using namespace std;

int *minmax(int *arr, int l, int r) {

    int *res1;
    int *res2;

    // If array has single element.
    if (r == l) {
        res1 = new int[2];
        res1[0] = arr[r];
        res1[1] = arr[r];

        return res1;
    }

    // If array has two elements.
    if (l == r-1) {

        res1 = new int[2];

        if (arr[l] <= arr[r]) {
            res1[0] = arr[l];
            res1[1] = arr[r];
        } else {
            res1[0] = arr[r];
            res1[1] = arr[l];
        }

        return res1;
    }

    int mid = (l+r) / 2;
    
    // res1 = min and max from first half.
    res1 = minmax(arr, l, mid);

    // res2 = min and max from second half.
    res2 = minmax(arr, mid+1, r);
    

    // Get min and max from both results.
    if (res2[0] <= res1[0]) {
        res1[0] = res2[0];
    } 
    if (res2[1] > res1[1]) {
        res1[1] = res2[1];
    } 

    return res1;
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // The variable sized array is only possible in C99.
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *res = minmax(arr, 0, n-1);

    cout << "The smallest element in an array is " << res[0] << " and the largest element in an array is " << res[1];

    return 0;
}
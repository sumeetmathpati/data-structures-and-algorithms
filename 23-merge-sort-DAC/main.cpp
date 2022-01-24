#include <iostream>

using namespace std;

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int *mergeArray(int *arr1, int n1, int *arr2, int n2) {
    int *res = new int[n1+n2];;
    int resIndex = 0;
    int arr1Index = 0;
    int arr2Index = 0;    

    for (int i = 0; i < (n1+n2); i++) {
        if (arr1[arr1Index] <= arr2[arr2Index]) {
            res[resIndex] = arr1[arr1Index];
            resIndex++;
            arr1Index++;
        } else {
            res[resIndex] = arr2[arr2Index];
            resIndex++;
            arr2Index++;
        }
    }

    return res;
}

int *mergeSort(int *arr, int l, int r) {
    if (l == r) {
        return arr;
    }

    int mid = (l+r) / 2;
    
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

    int *res = mergeSort(arr, 0, (n-1));
    cout << "Sorted array is:" << endl;
    printArray(arr, n);
    
}
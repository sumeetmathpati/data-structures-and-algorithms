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

int main() {

    int n1, n2;
    int *res;

    cout << "Enter the number of elements in first array: ";
    cin >> n1;

    cout << "Enter the number of elements in second array: ";
    cin >> n2;

    // The variable sized array is only possible in C99.
    int arr1[n1];
    int arr2[n2];

    cout << "Enter " << n1 << " elements (in sorted order) for first array." << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter " << n2 << " elements (in sorted order) for second array." << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    res = mergeArray(arr1, n1, arr2, n2);
    cout << "Merged array is:" << endl;
    printArray(res, (n1+n2));


}
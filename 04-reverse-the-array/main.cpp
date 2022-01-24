#include <iostream>

using namespace std;

int reverseArray(int arr[], int n) {
    
    for(int i = 0, j = n-1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
    
    return 0;
}

void swap(int *num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
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

    cout << "Before reversing array is: ";
    printArray(arr, n);
    cout << endl;

    reverseArray(arr, n);

    cout << "After reversing array is: ";
    printArray(arr, n);
    
    return 0;
}
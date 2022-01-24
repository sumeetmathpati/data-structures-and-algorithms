#include <iostream>

using namespace std;

void swap(int *num1, int *num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {

    int smallest;

    for(int i = 0; i < n; i++) {
        smallest = INT32_MAX;
        for (int j = i+1; j < n-1; j++) {
            if (arr[j] < smallest) {
                smallest = arr[j];
            }
        }

        if (arr[i] > smallest) {
            swap(&(arr[i]), &smallest);
        }
    }

}

int main() {

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);


    int n;

    cin >> n;

    // The variable sized array is only possible in C99.
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    printArray(arr, n);    

    return 0;
}
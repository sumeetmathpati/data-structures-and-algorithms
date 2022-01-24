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

void bubbleSort(int arr[], int n) {

	bool swapped = false;
    
    for (int i = 0; i < n; i++) {
    	for (int j = 1; j < n-i; j++) {

    		if (arr[j] < arr[j-1]) {
    			swap(arr+j, arr+(j-1));
    			swapped = true;
    		}
    	}

    	if (swapped == false) {
    		break;
    	}
    }
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

    bubbleSort(arr, n);

    cout << "The sorted array is:" << endl;
    printArray(arr, n);    

    return 0;
}
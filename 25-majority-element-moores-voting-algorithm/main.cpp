/*

An element in an array is called majority element if it occurs 
more than n/2 times in an array of size n, hence there will always
be only one majority element.

Majority element may or may not present, but in our problems, we 
assume that majority element always present in our input array.
If we don't want to assume that the majority element does not exist, 
then at the end we have to count the frequency of the output to verify the 
output.

*/

#include <iostream>

using namespace std;

int majorityElement(int *arr, int n) {
    
    int candidate;
    int count = 0;

    if (n > 1) {
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                candidate = arr[i];
                count++;
            } else if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            } 
        }
    }

    return candidate;
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

    cout << "Majority element is: " << majorityElement(arr, n);
}
#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Create a vector
    vector<int> iv;

    // Insert element at the end
    iv.push_back(10);
    iv.push_back(20);
    iv.push_back(30);


    // Never use [] to assign elements.

    // Access element using index
    iv[0] = 100;    
    cout << "First element is " << iv[0] << endl;
    cout << "Second element is " << iv[1] << endl;
    cout << "Third element is " <<iv.at(2) << endl;

    // at() will give index out of bound error, but
    // accesing with [] will not give index out of bound error.

    // Pop last inserted element.
    iv.pop_back();
    
    // Iterate over vector.
    for (int i = 0; i < iv.size(); i++) {
        cout << iv[i] << " ";
    }
    cout << endl;

    
    





}
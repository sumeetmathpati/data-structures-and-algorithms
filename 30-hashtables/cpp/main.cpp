#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    unordered_map<int, string> itos;

    // Insert elements
    pair<int, string> p(1, "one");
    itos.insert(p);

    // Another way to insert.
    itos.insert(pair<int, string>(2, "two"));

    // Another way to insert.
    itos[3] = "Three";

    // Accessing elements using key.
    cout << "1 in words = " << itos[1] << endl;
    cout << "2 in words = " << itos.at(2) << endl;

    // at() throws the error if key does not exist, but the
    // square bracket does not generate error, it adds that key and 
    // returns the 0 value of respecive data type.

    // Check if key is present.
    if (itos.count(5) == 0) {
        cout << "Key 5 is not present." << endl;
    } else {
        cout << "Key 5 is present." << endl;
    }

    // Delete key
    itos.erase(2);
}

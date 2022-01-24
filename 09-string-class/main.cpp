/*

Using array of characters, we always have to take care of null character at the end, but that's not the case
with string class.

*/

#include <iostream>

using namespace std;

int main() {

    string str1 = "Hello worl";
    string *strp2 = new string;

    str1.push_back('d');
    str1.push_back('a');
    str1.pop_back();
    cout << str1 << endl;

    // capacity
    cout << "Capacity of the string str1 is " << str1.capacity() << endl;

    // resize
    str1.resize(5);
    cout << str1 << endl;
    cout << "Capacity of the string str1 is " << str1.capacity() << endl;

    // strink to fit
    str1.shrink_to_fit();
    cout << "Capacity of the string str1 is " << str1.capacity() << endl;

    
    

    return 0;
}


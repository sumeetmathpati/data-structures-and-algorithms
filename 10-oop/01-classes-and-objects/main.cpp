#include <iostream>
#include <cstring>
#include "person.h"
#include "student.h"


using namespace std;

int main() {

    // Static object
    Person p1;

    // Setting values of object.
    p1.setName("Sherlock");
    p1.setAge(35);

    cout << "My name is " << p1.getName() << endl;
    cout << "My age is " << p1.getAge() << endl;

    // Dynamic object 
    Person *p2 = new Person();

    (*p2).setName("John");
    // Line below is similar to the above line.
    p2->setAge(35);

    Person *p3 = new Person("Jim Moriarty", 35);

    cout << "There are total " << Person::getCount() << " person(s)." << endl;

    return 0;
}
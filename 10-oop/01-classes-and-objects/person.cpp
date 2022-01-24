#include "person.h" // header in local directory
#include <iostream> // header in standard library

using namespace std;

Person::Person() {
    count++;
}

Person::Person(string name, int age) {
    count++;
    this->name = name;
    this->age = age;
}


int Person::count = 0;

int Person::getCount() {
    return count;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}
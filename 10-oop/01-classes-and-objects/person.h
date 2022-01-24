#ifndef PERSON_H 
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
    private:
        static int count;
        string name;
        int age;
    
    public:

        // Constructors
        Person();
        Person(string name, int age);

        // Getters
        static int getCount() ;
        string getName();
        int getAge();
        
        // Getters
        void setName(string name);
        void setAge(int age);
};
#endif
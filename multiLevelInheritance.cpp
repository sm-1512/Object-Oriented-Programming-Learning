/*
    multiLevelInheritance.cpp

    This program demonstrates multi-level inheritance in C++.

    Classes:
    - Person: Base class representing a person with attributes 'name' and 'age'.
    - Student: Derived from Person, adds 'rollNo' attribute to represent a student.
    - gradStudent: Derived from Student, adds 'researchArea' attribute to represent a graduate student.

    The main function creates an object of gradStudent, assigns values to all inherited and own attributes,
    and prints them to the console.
*/
#include <iostream>
using namespace std;
//Multi Level Inheritance
class Person{
public:
    string name;
    int age;
};

// Student class inherits from Person and adds rollNo attribute
class Student : public Person{
public:
    int rollNo; // Roll number of the student
};

class gradStudent : public Student{
public:
    string researchArea;
};


int main(){
    gradStudent g1;
    g1.name = "Tony Stark";
    g1.age = 30;
    g1.rollNo = 101;
    g1.researchArea = "Artificial Intelligence";

    cout<<"Name: "<< g1.name << endl;
    cout<<"Age: "<< g1.age << endl;
    cout<<"Roll No: "<< g1.rollNo << endl;
    cout<<"Research Area: "<< g1.researchArea << endl;

    return 0;
}
/*
    This program demonstrates the concept of multiple inheritance in C++.

    Classes:
    - Student: Represents a student with attributes 'name' and 'rollNo'.
    - Teacher: Represents a teacher with attributes 'subject' and 'salary'.
    - teachingAssistant: Inherits from both Student and Teacher, combining their attributes.

    In main():
    - An object of teachingAssistant is created.
    - Attributes from both Student and Teacher are assigned to the object.
    - The object's details are printed to the console.

    Purpose:
    - To show how a class can inherit properties from multiple base classes in C++.
*/
#include <iostream>
using namespace std;

//Multiple Inheritance
class Student{
public:
    string name;
    int rollNo;
};

class Teacher {
public:
    string subject;
    double salary;
};

class teachingAssistant : public Student, public Teacher{
//This will inherit attributes from both Student and Teacher.
};


int main(){
    teachingAssistant ta;
    ta.name = "Tony Stark";
    ta.rollNo = 101;
    ta.subject = "Physics";
    ta.salary = 50000;

    cout<<"Name: "<< ta.name << endl;
    cout<<"Roll No: "<< ta.rollNo << endl;
    cout<<"Subject: "<< ta.subject << endl;
    cout<<"Salary: "<< ta.salary << endl;

    return 0;
}
   

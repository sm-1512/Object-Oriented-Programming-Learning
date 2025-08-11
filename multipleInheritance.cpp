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
   

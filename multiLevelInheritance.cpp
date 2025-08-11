#include <iostream>
using namespace std;
//Multi Level Inheritance
class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollNo;
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
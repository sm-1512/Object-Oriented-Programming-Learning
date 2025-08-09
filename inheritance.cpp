#include <iostream>
using namespace std;


class Person{
public:
    string name;
    string age;
    Person(){
        //Whenver object of child class is created, parent class constructor is called first.
        cout<<"Parent Class Constructor"<<endl;
    }
    ~Person(){
        cout<<"Parent class destructor"<<endl;
    }
};

class Student : public Person{
//This class is inheriting name and age property from person.   
public:
    int rollNo;
    Student(){
        cout<<"Child class constructor"<<endl;
    }
    //In case of destructor, the child class is class is invoked first since it is at the top of the stack.
    ~Student(){
        cout<<"Child class destructor"<<endl;
    }
    /* void getInfo(){
        cout<<"Name: "<< name << endl;
        cout<<"Age: "<< age << endl;
        cout<<"Roll No: "<< rollNo << endl;
    } */
};


int main(){
    Student s1;
    s1.name = "John";
    s1.age = 18;
    s1.rollNo = 1234;
    //s1.getInfo();
    return 0;
}
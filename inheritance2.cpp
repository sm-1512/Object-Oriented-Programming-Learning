#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int rollNo;
    Student(string name, int age, int rollNo): Person(name,  age){ 
        //Since we are calling person constructor we dont give it a type
        this->rollNo = rollNo;
    }
    
    void getInfo(){
        cout<<"Name: "<< name << endl;
        cout<<"Age: "<< age << endl;
        cout<<"Roll No: "<< rollNo << endl;
    }
};

int main(){
    Student s1("John", 18, 1234);
    s1.getInfo();
    return 0;
}
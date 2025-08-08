#include<iostream>
using namespace std;

//Learn using the this operator
class Teacher{
public:
    string name;
    string dept;
    string subject;

    //Parameterised Constructor
    Teacher(string name, string dept, string subject){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    void getInfo(){

        //Both the below methods yield the same result.

        /* cout<< "Name :" << this->name << endl;
        cout<< "Department :" << this->dept << endl;
        cout<< "Subject :" << this->subject << endl; */


        cout<< "Name :" << name << endl;
        cout<< "Department :" << dept << endl;
        cout<< "Subject :" << subject << endl;
    }
};

int main(){
    Teacher t1("John Doe", "Computer Science", "C++"); //Calling parameteried constructor
    t1.getInfo();
}
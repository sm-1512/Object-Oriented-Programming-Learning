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

    //Copy Constructor
    Teacher(Teacher &orgObj){
        cout<<"This is the copy Constructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;

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
    //t1.getInfo();
    Teacher t2(t1);  //Custom copy constructor invoked. 
    t2.getInfo(); 
}
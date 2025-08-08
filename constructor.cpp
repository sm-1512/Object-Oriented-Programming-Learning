#include<iostream>
using namespace std;


class Teacher{
public:
    //Non-parameterised
    Teacher(){
        //This is a constructor function.
        //Same name as class.
        //Called only once during object creation.
        //Memory allocation happens when constructor is called.
        //Always public as it is called from main and main function does not have access to private members.

        subject = "Computer Science";
    }

    //Parameterised Constructor
    Teacher(string nm, string d, string sub){
        name = nm;
        dept = d;
        subject = sub;
    }
    string name;
    string dept;
    string subject;


    void getInfo(){
        cout<< "Name :" << name << endl;
        cout<< "Department :" << dept << endl;
        cout<< "Subject :" << subject << endl;
    }
};



int main(){
    //Teacher t1; Constructor call
    //cout<<t1.subject<<endl;

    Teacher t1("John Doe", "Computer Science", "C++"); //Calling parameteried constructor
    t1.getInfo();
}
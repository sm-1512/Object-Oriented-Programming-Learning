#include<iostream>
using namespace std;


class Teacher{
public:
    Teacher(){
        //This is a constructor function.
        //Same name as class.
        //Called only once during object creation.
        //Memory allocation happens when constructor is called.
        //Always public as it is called from main and main function does not have access to private members.

        subject = "Computer Science";
    }
    string name;
    string dept;
    string subject;
};



int main(){
    Teacher t1; //Constructor call
    cout<<t1.subject<<endl;
}
#include <bits/stdc++.h>
using namespace std;


//Class is a blueprint of an object. Here teacher class defines how a particular teacher entity would look like. It would have a name, a department etc.
//Properties and attributes are called members of a class.
class Teacher {
public: //Access specifier: In C++, by default members are private and cannot be accessed outside the class. To make them accessible outside the class we make them public.
    //Properties or attributes
    string name;
    string dept;
    string subject;
    string salary;

    //methods also called member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};


int main(){

    Teacher t1; //Creating object teacher.
    t1.name = "John Doe";  //The members of the class can be accessed via the dot(.) property.
    t1.dept = "Information Technology";
    t1.subject = "Object Oriented Programming";
    t1.salary = "100000";

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    
    
    return 0;
}
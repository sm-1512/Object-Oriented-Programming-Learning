#include<iostream>
using namespace std;

class Student{
public:
    string name;
    //double cgpa;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;; //Make this point to a new float memory
        *cgpaPtr = cgpa;  //Store cgpa value in that pointer
    }


    /* Student(const Student &obj){
        this->name = obj.name;
        cgpaPtr = new double; //For deep Copy create a new memory
        *cgpaPtr = *obj.cgpaPtr;
    } */

    //Destructor
    ~Student(){
        cout<<"Hi I delete everything"<<endl;
        delete cgpaPtr;

    }
    void getInfo(){
        cout<< "name: " << name << endl;
        cout<< "cgpa: " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("Rahul", 9.5);
    s1.getInfo(); 



    /* Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.name = "Neha";
    s2.getInfo(); */
    return 0;


}//At the end of the scope of main the destructor is called
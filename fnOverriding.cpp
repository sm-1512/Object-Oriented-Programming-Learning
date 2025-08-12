#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"Parent class method called."<<endl;
    }
};

class Child : public Parent{
public:
    /* void getInfo(){
        cout<<"Child class method called."<<endl;
    } */
};



int main(){
    Parent p;
    Child c;
    p.getInfo();
    c.getInfo();
    return 0;
}
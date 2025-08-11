#include<bits/stdc++.h>
using namespace std;
/*
    This code demonstrates the concept of function overloading, which is a form of compile-time (static) polymorphism in C++. 
    Polymorphism allows objects to be treated as instances of their parent class rather than their actual derived class. 
    In the context of function overloading, multiple functions can have the same name but different parameter lists within the same scope.
    Like here the function show has the same name but different parameter types.

    In this code:
    - An object 'obj' of class 'Print' is created.
    - The 'show' method is called twice with different argument types: once with an integer (5) and once with a character ('A').
    - This implies that the 'Print' class has overloaded versions of the 'show' method, each handling a different parameter type.
    - The compiler determines which version of 'show' to invoke based on the argument type at compile time.

    This example illustrates how function overloading enables the same function name to perform different tasks based on input parameters, 
    showcasing static polymorphism in C++.
*/
class Print{
public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }
    void show(char ch){
        cout<<"char:"<<ch<<endl;
    }
};


int main(){
    Print obj;
    obj.show(5);
    obj.show('A');
    return 0;
}
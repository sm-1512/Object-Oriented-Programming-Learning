/*
    This program demonstrates the "Diamond Problem" in C++ multiple inheritance and its resolution using virtual inheritance.

    The Diamond Problem occurs when a class (D) inherits from two classes (B and C) that both inherit from a common base class (A). 
    Without virtual inheritance, D would inherit two copies of A, leading to ambiguity and redundancy.
    For example, calling a method from A in D would be ambiguous: should it use the A from B or the A from C?
    Virtual inheritance ensures that only one shared instance of A exists in D, resolving this ambiguity.

    Classes:
    - A: Base class with a constructor that prints "Class A".
    - B: Inherits virtually from A. Its constructor prints "Class B".
    - C: Inherits virtually from A. Its constructor prints "Class C".
    - D: Inherits from both B and C. Its constructor prints "Class D".

    In main(), an object of class D is created, which triggers the constructor chain.
    Virtual inheritance ensures that only one instance of class A is constructed, resolving the ambiguity of the diamond problem.
*/
#include<bits/stdc++.h>
using namespace std;

class A{
public:
    A(){
        cout<<"Class A"<<endl;
    }
};

class B : virtual public A{
public:
    B(){
        cout<<"Class B"<<endl;
    }
};

class C : virtual public A{
public:
    C(){
        cout<<"Class C"<<endl;
    }
};

class D : public B, public C{
public:
    D(){
        cout<<"Class D"<<endl;
    }
};


int main(){
    D obj;
    return 0;
}
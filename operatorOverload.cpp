/*

    This code demonstrates operator overloading in C++ using a Complex number class.

    Classes:
    --------
    Complex:
        - Represents a complex number with integer real and imaginary parts.
        - Constructors:
            - Complex(): Default constructor, initializes real and imag to 0.
            - Complex(int r, int i): Parameterized constructor, initializes real and imag to given values.
        - Operator Overloads:
            - Complex operator+(const Complex& c): Overloads the '+' operator to add two Complex numbers.
        - Methods:
            - void print(): Prints the complex number in the form "a + bi" or "a - bi".

    Usage:
    ------
    - Creates two Complex objects c1 and c2.
    - Adds them using the overloaded '+' operator.
    - Prints the result using the print() method.
*/
#include<bits/stdc++.h>
using namespace std;


class Complex{
private:
    int real, imag;
public: 
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    Complex operator+(const Complex& c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void print(){
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};
int main(){
    Complex c1(5,4);
    Complex c2(3,2);
    Complex c3 = c1 + c2; //c1.add(c2);
    c3.print();
    return 0;
}
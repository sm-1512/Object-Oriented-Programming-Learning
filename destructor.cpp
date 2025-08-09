#include <iostream>
using namespace std;

class myClass{
    public:
        //Constructor
        myClass(){
            cout<<"Constructor called when object created."<<endl;
        }
        ~myClass(){
            cout<<"Destructor called when object goes out of scope."<<endl;
        }

};
int main(){
    myClass obj; //Here object created so constructer called.
    return 0;
} //Constructor's work over so went out of scope so destructor called.
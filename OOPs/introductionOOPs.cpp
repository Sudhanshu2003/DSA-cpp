#include<iostream>
using namespace std;

class calculator{
    public : 
    int a;      // data members
    int b;

    void add(){     // member function
        cout<<"Addition : "<<a+b<<endl;
    }

    void sub(){
        cout<<"Subtraction : "<<a-b<<endl;
    }
};

int main(){
    calculator calci;
    calci.a = 13;
    calci.b = 5;

    calci.add();
    calci.sub();
    
}
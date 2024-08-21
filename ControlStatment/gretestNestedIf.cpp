#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a 1st number : ";
    cin>>a;
    cout<<"Enter a 2nd number : ";
    cin>>b;
    cout<<"Enter a 3rd number : ";
    cin>>c;
    if(a>c){
        if(a>c){
            cout<<a<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }

}
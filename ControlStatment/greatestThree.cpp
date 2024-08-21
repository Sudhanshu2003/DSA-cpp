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

    if(a>b && a>c){
        cout<<a<<" is largest";
    }
    if(b>a && b>c){
        cout<<b<<" is largest";
    }
    if(c>a && c>b){
        cout<<c<<" is largest";
    }
}
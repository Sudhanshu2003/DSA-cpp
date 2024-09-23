#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of string : ";
    cin>>n;
    char str[n];
    cout<<"Enter the String : ";
     //  Input
     for(int i=0; i<n; i++){
        cin>>str[i];
     }

     for(int i=0; str[i] !='\0'; i++){
        if(i%2==0)  str[i]='a';
    }
    cout<<str;
}
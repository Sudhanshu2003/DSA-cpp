#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int n = str.size();
    cout<<str.substr(n/2);
}
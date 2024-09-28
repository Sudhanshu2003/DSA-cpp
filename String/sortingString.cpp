#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String : ";
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
}
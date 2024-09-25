// Input a string of even length and reverse the first half of the string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String : ";
    getline(cin,s);
    int n = s.length();
    reverse(s.begin(),s.end()+n/2);
    cout<<s;
}
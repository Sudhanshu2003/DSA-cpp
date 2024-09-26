#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "This is program";

    // //   Find the length 
    
    // // cout<<str.size();  0 t0 str.size-1
    //  cout<<str.length();


    //   Push_back() insert the element
    
    // string str = "Shivam";
    // cout<<str<<endl;
    // str.push_back(' ');
    // str.push_back('K');
    // str.push_back('u');
    // str.push_back('m');
    // str.push_back('a');
    // str.push_back('r');
    // cout<<str<<endl;


    // //   Pop_back()  Dlete the elment
    
    // string s = "Shivam";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;


    // // '+' operator 

    // string s = "abc";
    // cout<<s<<endl;
    // // s = s + "def";
    // // cout<<s<<endl;
    //  s = "xyz" + s;
    // cout<<s<<endl;


    // reverse()

    string s = "abcdefg";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()+5);
}
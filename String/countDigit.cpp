// Return the total number of digits in a number without using any loop.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x = 12445532;
    string s = to_string(x);
    cout<<s.length();
}
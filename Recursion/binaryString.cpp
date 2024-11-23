//  Generate all binary strings of length n without consecutive 1's.
#include<iostream>
#include<string>
using namespace std;
void binaryString(string s, int n){
    if(n == 0){
        cout<<s<<endl;
        return;
    }
    binaryString(s+'0', n-1);
    if(s=="" || s[s.length()-1]=='0')  binaryString(s+'1', n-1);
}
int main(){
    int n = 2;
    binaryString("",n);
}
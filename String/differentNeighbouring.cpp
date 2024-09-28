// Warmup problem : Input a string and return the numbers of times the neighbouring characters are different from each other.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String : ";
    cin>>s;
    int count = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(n == 1)  break;
        else if (n == 2){
            count++;
            break;
        }
        else if (i == 0){
            if(s[i] != s[i+1])  count++;
        }
        else if(i == n-1){
            if(s[i] != s[i+1] && s[i-1])  count++;
        }
        else if(s[i] != s[i+1] && s[i] != s[i-1])  count++;
    }
    cout<<count;
}
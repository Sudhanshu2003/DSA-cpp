// // Sort a string in decreasing order of values associated after removal of values smaller than X.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of String : ";
    cin>>n;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string str = "";
    for(int j=0; j<n; j++){
        if(s[j] >= 'X'){
            str.push_back(s[j]); 
        }
    }
    

    for(int i=0; i<n; i++) {
        //  Traverse
        for(int j=0; j<n-i; j++) {
            if(str[j] < str[j+1]) { // Swap 
                swap(str[j], str[j+1]);
            }
        }
    }
    // sort(str.begin(),str.end(),greater<char>());
    cout<<str;
}

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str = "raghav is a programming faculty. He is a DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // print vector
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(), v.end());
    // print vector
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}
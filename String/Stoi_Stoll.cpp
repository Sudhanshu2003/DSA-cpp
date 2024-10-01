#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "123456";
    int x = stoi(s);
    cout<<"string to integer : "<<x<<endl;
    

    string str = "124357585954246";
    long long y = stoll(str);
    cout<<"string to longlong : "<<y;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character : ";
    char ch;
    cin>>ch;
    // A to Z = 65 to 90
    // a to z = 97 to 122
    char ascii = (int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        cout<<"The character is alphabet";
    }
    else{
         cout<<"The character is not alphabet";
    }
}
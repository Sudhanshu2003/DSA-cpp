#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Marks : ";
    int n;
    cin>>n;
    if(n>=90){
        cout<<"Excellent";
    }
    else if(n>=80){
         cout<<"Very Good";
    }
    else if(n>=70){
        cout<<"Good";
    }
    else if(n>=60){
        cout<<"can do better";
    }
    else if(n>=50){
        cout<<"Average";
    }
    else if(n>=40){
        cout<<"Below Average";
    }
    else{
        cout<<"Fail";
    }
}
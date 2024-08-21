#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an intger number : ";
    int n;
    cin>>n;
    // if((n%3 == 0 || n%5 == 0) && n%15 != 0){
    //     cout<<"The number is divisible by 3 or 5 but not equal to 15";
    // }
    // else{
    //     cout<<"Not matching condition";
    // }

    if(n%3 == 0 || n%5 == 0){
        if(n%15 != 0){
            cout<<"The number is divisible by 3 or 5 but not equal to 15";
        }
        else{
            cout<<"Not matching condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}
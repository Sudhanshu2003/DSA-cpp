#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //   input 
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int min = arr[0];
    for(int i=0; i<=n-1; i++){
        if(min>arr[i])  min=arr[i];
    }
    cout<<"minimum value is "<<min;
}
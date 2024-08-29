#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //  input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int mul=1;
    for(int i=0; i<=n-1; i++){
        mul = mul * arr[i];
    }
    cout<<mul;
}
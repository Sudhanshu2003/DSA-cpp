#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter number of array : ";
    cin>>n;
    int arr[n];
    //  input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"you want search the number : ";
    cin>>x;
    bool flag = false;   //  check mark
    //  search
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x)  flag = true;
    }
    if(flag == true)  cout<<"number is found";
    else  cout<<"number is not found";
}
// Find out maximum element of an array using recursion.
#include<iostream>
#include<climits>
using namespace std;
int minInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MAX;
    return min(arr[idx],minInArray(arr,n,idx+1));
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum Value In Array : "<<minInArray(arr,n,0);
}
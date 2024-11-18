// Find out maximum element of an array using recursion.
#include<iostream>
#include<climits>
using namespace std;
int maxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
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
    cout<<"Maximum Value In Array : "<<maxInArray(arr,n,0);
}
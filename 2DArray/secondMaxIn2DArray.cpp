#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of columns : ";
    cin>>m;
    int arr[n][m];
        //  Input
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
        //   max
    int max = INT_MIN;    
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            if(max<arr[i][j])  max=arr[i][j];
        }
    }
        //  SecondMax
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            if(arr[i][j]!=max && smax<arr[i][j])  smax = arr[i][j];  
        }
    } 
    cout<<"Maximum Value is : "<<max<<endl;  
    cout<<"SecondMaximum Value is : "<<smax<<endl;   
}
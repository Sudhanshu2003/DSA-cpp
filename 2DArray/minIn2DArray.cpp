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
        //   min
    int min = INT_MAX;    
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            if(min>arr[i][j])  min=arr[i][j];
        }
    }
    cout<<min;
}
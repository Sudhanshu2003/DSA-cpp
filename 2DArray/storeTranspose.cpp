#include<iostream>
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
    cout<<endl;
       //  Output
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
    cout<<endl;

    //  store the transpose
    int t[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            t[i][j] = arr[j][i];
        }
    }

    //  printing the transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
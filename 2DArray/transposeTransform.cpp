#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/coiumns : ";
    cin>>m;
    int arr[m][m];
       //  Input
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<'\n';
       //  Output
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
    cout<<endl;

    //   transpose
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            //  swaping                                                                                                                                 
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //  printing the transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
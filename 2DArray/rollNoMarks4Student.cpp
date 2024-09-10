//  WAP to store roll no and marks obtained by 4 students side by side in a matrix.
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the rollno : ";
     cin>>n;
     int m;
     cout<<"Enter the marks : ";
     cin>>m;
    int arr[4][2];
       //  Input
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
       //  Output
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}
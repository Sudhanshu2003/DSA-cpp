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
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout << "Spiral order: " << endl;
    
    int minr = 0, minc = 0;
    int maxr = n-1, maxc = m-1;
    while(minr <= maxr && minc <= maxc){
        //  right
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc)  break;
         
        //  down
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc)  break;

        //   left
        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc)  break;

        //   up
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}

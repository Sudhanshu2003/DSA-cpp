#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[] = {7,0,1,4,2,0,2,0,1,0,0};
    int n = 11;

    for(int i=0; i<n; i++){  //  n-1 passes
        cout<<arr[i]<<" ";
    }

    //  bubblesort
    for(int i=0; i<n-1; i++){
        // traverse
        for(int j=0; j<n-i-1; j++){
            if(arr[j] == 0)
                swap(arr[j],arr[j+1]);  // swap
        }
    }
    cout<<endl;  
    for(int i=0; i<n; i++){  
        cout<<arr[i]<<" ";
    }
}

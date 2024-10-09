#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[] = {7,4,3,5,1,6,2};
    int n = 7;

    for(int i=0; i<n; i++){  //  n-1 passes
        cout<<arr[i]<<" ";
    }

    // //  bubblesort
    // for(int i=0; i<n; i++){
    //     // traverse
    //     for(int j=0; j<n-i; j++){
    //         if(arr[j]>arr[j+1])
    //             swap(arr[j],arr[j+1]);  // swap
    //     }
    // }
    // cout<<endl;

    //  bubblesort optimised
    for(int i=0; i<n; i++){
        // traverse
        bool flag = true;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);  // swap
                flag = false;
        }
        if(flag == true)  // swap didn't happen
            break;
    }
    cout<<endl;   
    for(int i=0; i<n; i++){  
        cout<<arr[i]<<" ";
    }
}
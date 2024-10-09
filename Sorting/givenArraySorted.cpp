// Given array check the sorted or not
#include<iostream>
//#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool flag = true;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == true)  cout<<"Array is Sorted";
    else cout<<"Array is UnSorted";
}
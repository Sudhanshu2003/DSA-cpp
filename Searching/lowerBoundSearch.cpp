#include<iostream>
using namespace std;
int main(){
    int arr [9] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 18;

    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x){
            cout<<arr[mid - 1];
            flag = true;
            break;
        }
        else if(arr[mid] < x)
            lo = mid + 1; 
        else hi = mid - 1;
    }
    if(flag == false)  cout<<"Lower Bound of x is "<<arr[hi];
}
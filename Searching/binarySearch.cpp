#include<iostream>
#include<algorithm> 
using namespace std;
int main() {
    int arr[] = {2, 5, 3, 6, 8, 1, 51, 32, 12};
    int n = 9;

    sort(arr, arr + n);

    int lo = 0;
    int hi = n - 1;
    int target = 5;
    
    // binary search
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target){
            cout<<"Target found at index: "<<mid<<endl;
            return 0;
        }    
        else if (arr[mid] > target)   hi = mid - 1; 
        else   lo = mid + 1; 
    }
    cout<<"Target not found"<<endl;
    return -1;
}

/* Given a sorted array of n elements and a target 'x' find the last Occurrence of 'x' in the array. if 'x' 
   does not exist return -1.
*/
#include<iostream> 
using namespace std; 

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 6, 8, 8, 9};
    int n = 15;
    int x = 3;

    int lo = 0; 
    int hi = n - 1;
    int lastIndex = -1;
    bool flag = false;

    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] == x) {
            flag = true;      // flag as true if x is found
            lastIndex = mid;  // last index to mid
            lo = mid + 1;     // Continue searching to the right for the last occurrence
        }
        else if(arr[mid] < x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if(flag == false)   cout<<-1<<endl;
    cout<<"Last Occurrence of x "<<lastIndex<<endl;
    return 0;
}

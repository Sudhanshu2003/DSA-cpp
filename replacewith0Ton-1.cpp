/* Given an array with N distinct element, convert the given array to a from where all element are in the range from 0 t N-1.
    The order of elements is the same. i.e, 0 is placed in the place of the smallest element, 1 is placed for the second smallest
    element... N-1 is placed for the largest elsements.
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,25,12,8,16};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(n,0);
    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0; j<n; j++){
            if(v[j] == 1)  continue;
            else{
                if(min > arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
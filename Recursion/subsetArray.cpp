#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[], int n, int idx, vector<int> v){
    if(idx==n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr, n, idx+1, v);
    v.push_back(arr[idx]);
    printSubset(arr, n, idx+1, v);
}
int main(){
    int arr [] = {1,2,3,4};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,n,0,v);
}
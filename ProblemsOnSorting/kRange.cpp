/* Given an array, arr[] containing 'n' integer, the task is to find an intger (say k) such that after replacing each and every 
   index of the array by |a base i - k| where (i belongs [1,n]), result in a sorted array. if no such integer exists that satisfies
   the above condition then return -1.
*/
#include<iostream>
#include<climits>
using namespace std;
float max(float a, float b){
    if(a>=b)  return a;
    else return b;
}
float min(float a, float b){
    if(a<b)  return a;
    else return b;
}
int main(){
    int arr[] = {5,3,14,15};
    int n = 4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[i+1]){  // kmin
            kmin = max(kmin,(arr[i] + arr[i+1])/2.0);
        }
        else {
            kmax = min(kmax,(arr[i] + arr[i+1])/2.0);
        }
        if(kmin > kmax){
            flag = false;
            break;
        }
    }
    if(flag == false)  cout<<-1;
    else cout<<"Range of k is :["<<kmin<<","<<(int)kmax<<"]";
}
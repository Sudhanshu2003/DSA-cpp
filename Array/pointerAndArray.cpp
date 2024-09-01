#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,2,7,3,9,8, 3};
    int* ptr = arr;
    // cout<<ptr<<endl;
    for(int i=0; i<=7; i++){
        cout<<ptr[i]<<" ";
    }
}
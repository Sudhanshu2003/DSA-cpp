#include<iostream>
#include<vector>
using namespace std;
void change2D(int arr[3][3]){
     arr[0][1] = 24;
}
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout<<arr[0][1]<<endl;
    change2D(arr);
    cout<<arr[0][1]<<endl;
}
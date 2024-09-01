#include<iostream>
using namespace std; 
void display(int a[]){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[5] = {3,6,2,6,9,};

    //  accessing of another element
    //  upadition, pass by value and pass by refrence

    display(arr);
    change(arr);
    display(arr);
}
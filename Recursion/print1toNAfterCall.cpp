#include<iostream>
using namespace std;
void print(int n){
    //  base case
    if(n == 0)  return;
    // recursively case
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}
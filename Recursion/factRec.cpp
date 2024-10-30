#include<iostream>
using namespace std;
int fact(int a){
    //  base case
    if((a == 1) || (a == 0)) return 1;
    //  recursive call
    return a*fact(a-1);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fact(n);
    cout<<"Factorial of"<<" "<<n<<" "<<"="<<" "<<fact(n);
}
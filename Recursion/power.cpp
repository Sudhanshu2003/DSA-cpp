#include<iostream>
using namespace std;
int power(int a, int b){
    if(b == 0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n;
    cout<<"Enter Base Number : ";
    cin>>n;
    int m;
    cout<<"Enter Exponent Number : ";
    cin>>m;
    cout<<" "<<n<<" "<<"raised to the power "<<m<<" is "<<power(n,m);
}
// Calculate Common Divisor of two numbers.
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a == 0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a = 27;
    int b = 45;
    cout<<"Calculate the gcd : "<<gcd(a,b);
}
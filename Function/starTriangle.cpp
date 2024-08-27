// using function print starTriangle
// 3
// *
// **
// ***
// 5
// *
// **
// ***
// ****
// *****
// 2
// *
// **
#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(4);
    starTriangle(2);
    starTriangle(5);
    
}
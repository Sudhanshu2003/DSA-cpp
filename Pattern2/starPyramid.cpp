#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"No of lines : ";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int k=1; k<=n-i; k++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int nst=1;
    int nsp=n-1;
    for(int k=1; k<=n; k++){
        for(int i=1; i<=nsp; i++){
        cout<<" ";
    }
    nsp--;
    for(int j=1; j<=nst; j++){
        cout<<"*";
    }
    nst +=2;
    cout<<endl;
    }
}
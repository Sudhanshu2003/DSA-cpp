#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter Target : ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter Size Array : ";
    cin>>n;
    cout<<"Enter The Element :";
    for(int i=0; i<=n; i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    for(int i=0; i<=v.size()-2; i++ ){
        for(int j=0; j<=v.size()-1; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
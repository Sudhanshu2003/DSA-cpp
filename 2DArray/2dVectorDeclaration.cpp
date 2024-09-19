#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > v(3, vector<int> (4,3));
    cout<<"Print of Vector : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"Print of Vector Size : ";
    cout<<v.size();
}
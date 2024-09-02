#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector <int> v;
    // v.push_back(5);
    // v.push_back(3);
    // v.push_back(9);
    // v.push_back(1);

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
     
     //  vector size
    // v.push_back(5);
    // cout<<v.size()<<endl;
    // v.push_back(3);
    // cout<<v.size()<<endl;
    // v.push_back(9);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;

    //   vector capacity
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;

}
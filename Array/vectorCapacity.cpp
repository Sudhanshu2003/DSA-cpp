#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;      //  size     capacity
     v.push_back(7);       // 1        1
    v.push_back(5);        // 2        2
    v.push_back(7);        // 3        4
    v.push_back(3);        // 4        4
    v.push_back(2);        // 5        8
    v.push_back(9);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
}
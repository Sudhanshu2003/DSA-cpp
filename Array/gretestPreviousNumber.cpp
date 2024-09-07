#include<iostream>
#include<vector>
using namespace std;
void previous(vector<int>&height){
    int n = height.size();
    int prev[n];
    prev[0]=-1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i])  max = height[i];
    }
     for(int i=0; i<n; i++){
        cout<<prev[i] << " ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    previous(v);
}
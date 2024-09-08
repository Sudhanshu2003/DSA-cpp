#include<iostream>
#include<vector>
using namespace std;
void nextGretest(vector<int>&height){
    int n = height.size();
    int next[n];
    next[n-1] = -1;
    int max = height[n-1];
    for(int i=n-2; i>=0; i--) {
        next[i] = max;
        if(max<height[i]) {
            max=height[i];
        }
    }
    // Print the next greatest elements
    for(int i=0; i<n; i++) {
        cout<<next[i]<<" ";
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

    nextGretest(v);
}


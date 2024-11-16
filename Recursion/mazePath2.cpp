#include<iostream>
using namespace std;
int maze(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze(row, col-1);
    int downWays = maze(row-1, col);
    int totalWays = rightWays + downWays;
    return totalWays;
}
void PrintPath(int row, int col, string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){  // destination reached
        cout<<s<<endl;
        return;
    }
    PrintPath(row, col-1, s+'R'); //right
    PrintPath(row-1, col, s+'D');  // down
}
int main(){
    int sr;
    cout<<"Enter the starting rows : ";
    cin>>sr;
    int sc;
    cout<<"Enter the starting column : ";
    cin>>sc;
    cout<<"TotalPath : "<<maze(sr,sc)<<endl;
    PrintPath(sr,sc,"");
}
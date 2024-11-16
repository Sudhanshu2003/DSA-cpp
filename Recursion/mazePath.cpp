#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr, sc+1, er, ec);
    int downWays = maze(sr+1, sc, er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
void PrintPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){  // destination reached
        cout<<s<<endl;
        return;
    }
    PrintPath(sr, sc+1, er, ec, s+'R'); //right
    PrintPath(sr+1, sc, er,ec, s+'D');  // down
}
int main(){
    int sr;
    cout<<"Enter the starting rows : ";
    cin>>sr;
    int sc;
    cout<<"Enter the starting column : ";
    cin>>sc;
    int er;
    cout<<"Enter the ending rows : ";
    cin>>er;
    int ec;
    cout<<"Enter the ending column : ";
    cin>>ec;
    cout<<"TotalWays : "<<maze(sr,sc,er,ec)<<endl;
    PrintPath(sr,sc,er,ec,"");
}
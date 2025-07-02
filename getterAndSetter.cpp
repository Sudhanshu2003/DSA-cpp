#include<iostream>
using namespace std;

class player{
    private : 
    int score;
    int health;

    public :
    // Setter
    int  setscore(int n){
        score = n;
    }
    int sethealth(int m){
        health = m;
    }

    // Getter 
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};
int main(){
    player shanu;
    shanu.sethealth(100);
    shanu.setscore(50);
    cout<<"Player Health : "<<shanu.gethealth()<<endl;
    cout<<"Player Score : "<<shanu.getscore()<<endl;
}
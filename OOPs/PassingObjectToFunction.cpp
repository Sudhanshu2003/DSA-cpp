#include<iostream>
using namespace std;

class player {
    private : 
    int health;
    int score;
    int age;
    bool alive;

    public : 
    // Setter
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAge(int age){
        this->age = age;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
    // Getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    int getAge(){
        return age;
    }
    bool getIsAlive(){
        return alive;
    }
};

int addScore(player a, player b){
    return a.getScore() + b.getScore();
}

player getMaxScore(player a, player b){
    if(a.getScore() > b.getScore()) return a;
    else return b;
}
int main(){
    player harsh;
    player karn;

    harsh.setHealth(80);
    harsh.setScore(100);
    harsh.setAge(22);
    harsh.setIsAlive(true);

    karn.setHealth(100);
    karn.setScore(90);
    karn.setAge(24);
    karn.setIsAlive(true);

    cout<<"Add Score : "<<addScore(harsh, karn)<<endl;

    player shivam = getMaxScore(harsh, karn);
    cout<<"MaxScore : "<<shivam.getScore()<<endl;
}
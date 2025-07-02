/* Problem Statement:
Create a class 'book' with name, price, and number of pages as its attributes. The class should contain following member functions : 
      1. countBooks (int price) : This function will return count of all the books that have a price less than the given price.
      2. isBookPresent (string title) : This will return a boolean value indicating wheather any book with the given title exists or not,
 */
#include<iostream>
using namespace std;

class book{
    public :
    char name;
    int price;
    int no_of_pages;

    int countBooks(int p){ 
        if(price < p) return 1;
        else return 0;
    }

    bool isBookPresent(char m){
        if(name == m) return true;
        else return false;
    }
};

int main(){
    book IgnitedMinds;
    IgnitedMinds.name = 'A';
    IgnitedMinds.price = 500;
    IgnitedMinds.no_of_pages = 200;

    cout<<"Counts of books : "<<IgnitedMinds.countBooks(700)<<endl;
    cout<<"Is book present : "<<IgnitedMinds.isBookPresent('n')<<endl;
}
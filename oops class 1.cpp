#include<iostream>
using namespace std;

class Hero{

    //Properties
    int health;

public:
    char name[100];
    char level;

    Hero(){
      cout<<  "Constructor called" <<endl;
    }

    //parameterized constructor
    Hero(int health){
     health = health;
    }
    void print(){
        cout<< level <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level= ch;
    }
};
int main(){
    //creation of Object
   // Hero h1;
  //cout<<"size " << sizeof(h1) <<endl;


//  Hero Ramesh;
//  cout<< "Ramesh health is " <<Ramesh.getHealth() <<endl;
//  Ramesh.setHealth(70);
//  Ramesh.level = 'A';
//  cout<<"health is : " << Ramesh.getHealth() <<endl;//error because of access modifer
//  cout<<"level is: " <<Ramesh.level<<endl;


/*
   /// static Allocation

   Hero a;
   a.setHealth(80);
   a.setLevel('B');
   cout<<"Level is " <<a.level <<endl;
   cout<< "Health is " << a.getHealth()<<endl;
   ///Dynamically

   Hero *b = new Hero;
   cout<<"Level is " <<(*b).level <<endl;
   cout<< "Health is " << (*b).getHealth()<<endl;

   cout<<"Level is " <<b->level <<endl;
   cout<< "Health is " << b->getHealth()<<endl;
*/


   //object created statically
   Hero ramesh;

   //dyanamically
   Hero *h = new Hero;
}

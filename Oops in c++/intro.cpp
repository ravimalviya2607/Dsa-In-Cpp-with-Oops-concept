#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    //properties

    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //Default Constructor
    Hero(){
        cout << "Default Constructor Called" << endl;
        name = new char[100];
    }

    //Parameterised Constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health; 
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health; 
    }

    //Copy Constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print(){
        cout << "[ Name: " << this->name << " ,";
        cout <<"health: "<< this->health << " ,";
        cout <<"level: "<< this->level << "]"<< endl;
        cout << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h ){
        health = h;
    }    

    void setLevel(char ch){
        level = ch;
    }

     void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout << "Destructor called " << endl;
    }

};

int Hero::timeToComplete = 5   ;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //delete b;
    // Hero hero1;
    // char name[7] = "Ravi"; 
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // hero1.setName(name);

    // //hero1.print();

    // //use default copy constructor

    // Hero hero2(hero1);
    // //hero2.print();
    // // Hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();

    // hero1 = hero2;
    // hero1.print();
    // hero2.print();


    // //object create statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh " << &ramesh << endl;
    // //ramesh.getHealth();
    // ramesh.print();

    // //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    // temp.print();

/*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    //dynamically allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(78);
    
    cout << "Level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "Level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

 
    //creation of Object
    //static allocation
    Hero ramesh;

    cout<<"Size of Ramesh is : " << sizeof(ramesh) << endl;

    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout<<"Health is : " << ramesh.getHealth() << endl;
    cout<<"Level is : " << ramesh.level  << endl;

*/    
    
    return 0;
}
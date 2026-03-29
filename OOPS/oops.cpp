#include<iostream>
#include<string.h>
using namespace std;

class hero{

    private:
    int health = 5;

    public:
    char *name;
    char level;
    static int timeToComplete;

    hero(){
        cout<<"Simple Constructor called" <<endl;
        name = new char[100];
    }

    //Parameterised constructor
    hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;
    }

    hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    //COPY CONSTRUCTOR
    hero(hero& temp){
        cout<<"Copy Constructor called" <<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<< this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<" ]";
        cout<< endl;
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
        level = ch;
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }

    ~hero(){
        cout<<"Destructor called "<<endl;
    }

    static int random(){
        return timeToComplete;
    }
    
};

//static
int hero::timeToComplete = 5;

int main()
{
    /*hero ramesh;    // static allocation
    //ramesh.health = 60;
    ramesh.level = 'A';

    //cout<<ramesh.health<<endl;
    cout<<ramesh.level<<endl;
    cout<<sizeof(ramesh)<<endl;

    cout<<"Ramesh health1 is " <<ramesh.getHealth()<<endl;

    //using setter
    ramesh.setHealth(70);
    cout<<"Ramesh health1 is " <<ramesh.getHealth()<<endl;


    //Dynamic allocation
    hero *b = new hero;
    cout<<"Level of hero b is "<<(*b).level<<endl;
    cout<<"Health of hero b is "<<(*b).getHealth()<<endl;

    b->setHealth(80);
    b->setLevel('B');
    
    cout<<b->getHealth()<<endl;
    cout<<b->level<<endl;*/
    
    //hero ayush;
    /*hero *a = new hero;

    hero ayush(10);
    cout<<"Adress of ayush "<<&ayush <<endl;
    ayush.getHealth();

    hero temp(22,'B');
    temp.print();*/

    //COPY
    /*hero suresh(78,'C');
    hero R(suresh);

    suresh.print();
    R.print();*/
    
    /*hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor
    hero hero2(hero1);
    //hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'C';
    hero1.print();
    hero2.print();*/
    
    //Destructor
    /*hero a1;
    hero *b1 = new hero();
    delete b1;*/
    
    /*cout<<hero::timeToComplete<<endl;

    hero e;
    cout<<e.timeToComplete<<endl;*/

    cout<<hero::random()<<endl;
    return 0;
}

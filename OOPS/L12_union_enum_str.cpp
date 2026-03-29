#include<iostream>
using namespace std;

typedef struct employee
{
    int id;       //memory:- 4
    char favChar; //memory:- 1
    float salary; //memory:- 4
}ep;

union money
{
    int rice; //4
    char car; //1 
    float pounds; //4
};

int main()
{
    ep Ayush;  
    union money m1;
    m1.rice = 45;
    m1.car = 'r';
    cout<<m1.rice<<endl; // gives garbage value 
    cout<<m1.car<<endl;

    enum meal {breakfast, lunch ,dinner};
    meal m2 = breakfast;
    cout<<m2<<endl;
    cout<<(m2==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    struct employee shubham; 
    struct employee rohan;

    Ayush.id = 1;
    Ayush.favChar = 'e';
    Ayush.salary = 15000;
    cout<<Ayush.salary<<endl;
    cout<<Ayush.favChar<<endl;
    cout<<Ayush.id<<endl;

    return 0;
}
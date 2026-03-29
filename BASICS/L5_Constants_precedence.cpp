#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    /*int a = 45;
    char c = 'c';
    cout<<"the value of a was: "<<a<<endl;

    a = 40;
    c = '5';
    cout<<"the value of a is: "<<a<<endl;*/

// ***Constants in c++ :- ***
    const int a = 4;
    cout<<"The value a is "<<a<<endl;
    // a = 20.6; You will get error because a is constant

// **** MANIPULATORS **** -->Helper function
    int b = 78,c = 1244;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

// TYPECASTING:- (for small to big variable)
    char grade = 'A';
    int value = grade;
    cout<< value <<endl;

// TYPECONVERSION:-(for big to small variable)
   double price = 100.90;
   int newPrice = (int)price;
   cout<< newPrice <<endl;
   

    return 0;
}
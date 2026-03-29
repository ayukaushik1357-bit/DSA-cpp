#include<iostream>

/*There are two types of header files:-
1.System header files: it comes with the compiler.
Ex-#include<iostream>
2.user defined files:it is written by the programmer.
Ex-#include"this.h"   
#include"this.h"-->this will produce an error if this.h
is no present in the current directory.  */

using namespace std;
int main(){

    int a=4, b=7;
    cout<<"operators in c++"<<endl;
    cout<<"The value of a + b :"<<a+b<<endl;
    cout<<"The value of a - b :"<<a-b<<endl;
    cout<<"The value of a / b :"<<a/b<<endl;
    cout<<"The value of a % b :"<<a%b<<endl;
    cout<<"The value of a++  :"<<a++<<endl;
    cout<<"The value of a--  :"<<a--<<endl;
    cout<<"The value of ++a  :"<<++a<<endl;
    cout<<"The value of --a  :"<<--a<<endl;

// Comparison operator:-
    cout<<"The value of a==b is "<<(a==b) <<endl; //false -> 0
    cout<<"The value of a<b is "<<(a<b) <<endl;
    cout<<"The value of a>b is "<<(a>b) <<endl; //true -> 1
    cout<<"The value of a!=b is "<<(a!=b) <<endl;
    cout<<"The value of a<=b is "<<(a<=b) <<endl;
    cout<<"The value of a>=b is "<<(a>=b) <<endl;

// logical operator:-
cout<<"The value of logical AND is "<<((a==b) && (a<b))<<endl;
cout<<"The value of logicsl OR is "<<((a==b) || (a<b))<<endl;
cout<<"The value of logical NOT is "<<!(a==b)<<endl;

    cout<< (5 / (double)2) << endl; 

// Urinary operator: 
    int a = 10;
    int b = a++;
    cout << b << endl; // takes value of a
    cout << a << endl; // update value of a 

    // for ++a first update then takes value

    return 0;
}
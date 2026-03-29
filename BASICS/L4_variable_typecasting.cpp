#include<iostream>
using namespace std;

int c = 45;

int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;

    cout<<"The global c is "<<::c;

/* The Scope Resolution Operator (::) in C++ enables us to access 
variables,functions, or classes defined in different scopes.*/

// ***** FLOAT,DOUBLE AND LONG LITERALS: *****
    float d = 34.4f;
    long double e = 34.4l;
    cout<<"The value of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The value of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"The value of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"The value of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"The value of 34.4 is "<<sizeof(34.4L)<<endl;

    cout<<"The value of d is "<<d<<endl<<"the value of e is "<<e;

// *****REFERENCE VARIABLES*****
    // Rohan --> Monty --> Rohu -->coder

    // A reference variable is one that refers to the address of another variable.
    float x = 455;
    float & y =x;
    cout<<x<<endl;
    cout<<y<<endl;
    // y is a reference to x, which means it doesn’t hold its own value but refers directly to x.

// *****TypeCasting*****
    int a = 45;
    int b = 45.6;
    cout<<"The value of a is "<<(float)a<<endl; 
    cout<<"The value of a is "<<float(a)<<endl;    

    cout<<"The value of b is "<<(int)b<<endl; 
    cout<<"The value of b is "<<int(b)<<endl;  

    int c = int(b);   
    cout<<"The expression is "<< a+b<<endl;
    cout<<"The expression is "<< a + int(b)<<endl;
    cout<<"The expression is "<< a + (int)b<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    //cout<<glo;
}

int main(){
    int a = 4;
    int b = 5;
    float pi = 3.14;
    //cout<<"the value of a is " <<a << "\n the value of b is " <<b ;
    //cout<<"\nThe value of pi is: "<<pi;
    sum();
    int glo = 9;
    glo = 88;
    cout<<glo;

    // In the above example global variable has lower precedence than local variable with same function.


    return 0;
}
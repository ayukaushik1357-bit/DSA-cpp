#include <iostream>
using namespace std;

void print(int i){
    cout << "The solution of integer addition is " << i << "\n";
}

// Your solution 
double add(double a, double b){  // add function in double 
    double z = a+b ;
    return (z);
}

int add(int a, int b){  // add function in int
    return a + b; 
}

void add_and_print(int x, int y){ // Add and print function
    double z = add(x,y);
    print(z);

/* scope of a variable:-where the existence of variable is valid.
   based on scope:-
   1.Local variable:-which are declared inside the braces of any function
   and can be accessed from anywhere.
   2.Global variable:-which are declared outside any function and can 
   be accessed from anywhere.
   
   LOCAL AND GLOBAL VARIABLE CAN HAVE SAME NAME IN C++.*/
}


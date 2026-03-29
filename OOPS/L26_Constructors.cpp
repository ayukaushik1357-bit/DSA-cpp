#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
//Creating a constructor:-
    /*constructor is a special function with same name as of class.
      It is used to initialise the objects of its class.
      Constructors are methods that are automatically executed every time you create an object. 
      The purpose of a constructor is to construct an object and assign values to the object's members.*/
    
    complex(void); //constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};

complex :: complex(void){ //-->It is a default constructor as it takes no parameters
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printNumber();
    
    return 0;
}

/* Characteristics of constructor:-
   1.Sjould be declared in public section of the class
   2.they cannot return values and do not have return types
   3.it can have default arguments
   4.we cannot refer to thier address
*/
#include<iostream>
using namespace std;

int main()
{
  //  POINTER -> data type which holds the adress of other data type
    int a = 5;
    int *b = &a;
    cout<<"The adress of a is "<<b<<endl;
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The value at adress b is "<<*b<<endl;


    /* & -> (Adress of) operator
       * -> dereference operator */

    cout<<" Size of integer is "<< sizeof(a)<<endl;
    cout<<" Size of pointer is "<< sizeof(b)<<endl;

   /* pointing to some garbage address
    int *p = 0;  
    cout<< *p <<endl;
    cout<< p <<endl; */

  // Formats to write pointer
    int i = 5;

    int *q = &i;
    cout<< q <<endl;
    cout<< *q <<endl;

    int *p = 0;
    p = &i;
    cout<< p <<endl;
    cout<< *p <<endl;

    int num = 5;
    int a1 = num;
    a1++;

    cout<< num <<endl;

    int *b1 = &num;
    cout<<"Before "<< num <<endl;
    (*b1)++;
    cout<<" After "<< num <<endl;

  // Important concept
    int i = 3;
    int *t = &i;

    *t = *t + 1;
    cout<< *t <<endl;
    cout<<" Before t "<< t <<endl;
    t = t +1;
    cout<<" After t "<< t <<endl;

    return 0;
    }
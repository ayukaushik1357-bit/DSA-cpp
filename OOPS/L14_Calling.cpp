#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}
/* This will not swap a and b
Pass by Value:
When you pass arguments by value,a copy of the variable is created inside the function. 
Any changes made to these variables affect only the copies, not the originals.
void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
}*/

// calling by reference using pointer
void swapPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// calling by reference using c++ reference variables
//int & 
void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    //return a;
}
int main()
{
    int x=4,y=5;
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    //swap(a,b);
    //swapPointer(&x,&y);
    //cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    //swapReferenceVar(x,y)=766;

    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;

    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

class complex{
    int a,b;
    public:
      complex(int ,int); //constructor declaration
      void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};
complex :: complex(int x,int y){ // This is parameterized constructor 
    a = x;
    b = y;
}

class point{
    int x,y;
    friend void distance(point o1 ,point o2 );
    public:
      point(int a,int b){
        x = a;
        y = b;
      }
      void displayPoint(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
      }
};
void distance(point o1,point o2){
    float dist;
    dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
    cout<<dist<<endl;
}

int main()
{
// Implicit call
    complex a(4,6); 

// Explicit call
    complex b = complex(5,67);
    a.printNumber();
    b.printNumber();
    
    point p(1,1);
    p.displayPoint();
    point q(4,6);
    q.displayPoint();
    distance(p,q);

    return 0;
}

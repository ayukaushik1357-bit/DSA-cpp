#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x,int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};

// Constructors With Default Arguments :-
class simple{
    int data1;
    int data2;
    public:
    //simple(int a = 4,int b = 5)
      simple(int a,int b){
        data1 = a;
        data2 = b;
      }
      void printData();
};
void simple :: printData(){
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}

int main()
{
    complex c1(4,6);
    c1.printNumber();
    complex c2(5);
    c2.printNumber();
    complex c3;
    c3.printNumber();

    simple s(1,4);
    s.printData();


    return 0;
}

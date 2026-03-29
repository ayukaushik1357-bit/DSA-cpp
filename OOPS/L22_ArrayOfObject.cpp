#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
      void setId(void){
        salary = 122;
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
      }
      void getId(void){
        cout<<"The id is "<<id<<endl;
      }
};

// Passing Objects as Function Arguments:-
class complex{
    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++) {
        fb[i].setId();
        fb[i].getId();
    }

    complex c1,c2,c3;
    c1.setData(-1,2);
    c1.printNumber();

    c2.setData(4,6);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();

    return 0;
}

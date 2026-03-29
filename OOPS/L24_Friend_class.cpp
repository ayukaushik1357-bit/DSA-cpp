#include<iostream>
using namespace std;

//Forward declaration:-
class complex;

class calculator{
    public:
      int add(int a,int b){
        return (a+b);
      }
      int sumRealComplex(complex ,complex );
      int sumCompComplex(complex ,complex );

};

class complex{
    int a,b;
    //Individually declaring function as friend
    //friend int calculator :: sumRealComplex(complex o1,complex o2);
    //friend int calculator :: sumCompComplex(complex o1,complex o2);

    //Declaring the entire calculator class as friend
    friend class calculator;
    public:
      void setNumber(int n1,int n2){
        a = n1;
        b = n2;
      }
      void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};


int calculator :: sumRealComplex(complex o1,complex o2){
        return (o1.a + o2.a);
      }
int calculator :: sumCompComplex(complex o1,complex o2){
        return (o1.b + o2.b);
      }

int main()
{
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(2,5);
    calculator cal;
    cal.sumRealComplex(o1,o2);
    int res = cal.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc = cal.sumCompComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<resc<<endl;
    
    return 0;
}

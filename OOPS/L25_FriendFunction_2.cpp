#include<iostream>
using namespace std;

class y;

class x{
    int data;
    public:;
      void setValue(int value){
        data = value;
      }
    friend void add(x,y);
};
class y{
    int num;
    public:;
      void setValue(int value){
        num = value;
      }
      friend void add(x,y);
};

void add(x o1, y o2){
    cout<<"summing datas of x and y objects gives me "<<o1.data + o2.num<<endl;
}


// COMPLEX EXAMPLE OF FRIEND FUMCTION:-
class c2;
class c1{
    int val;
    friend void exchange(c1 &,c2&);
    public:
      int indata(int m){ //Assigns a value to val.
        val = m;
      }
      void display(void){
        cout<<val<<endl;
      }
};
class c2{
    int val2;
    friend void exchange(c1 &,c2&);
    public:
      int indata(int m){
        val2 = m;
      }
      void display(void){
        cout<<val2<<endl;
      }
};
void exchange(c1 & o, c2 & p){ //Call by reference (&o,&p) ensures that changes happen directly to the original objects.
// It takes two objects (o from c1 and p from c2) by reference
    int temp = o.val;
    o.val = p.val2;
    p.val2 = temp;
}

int main()
{
    x a1;
    a1.setValue(3);
    y b1;
    b1.setValue(5);
    add(a1,b1);


    c1 oc1;
    oc1.indata(34);
    c2 oc2;
    oc2.indata(43);
    exchange(oc1,oc2);
    cout<<"the value after exchanging becomes: "<<endl;
    oc1.display();
    cout<<"the value after exchanging becomes: ";
    oc2.display();
    
    return 0;
}

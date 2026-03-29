#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Love Babbar 1"<<endl;
    }

    int sayHello(char name){
        cout<<"Hello Love Babbar 2"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello Love Babbar 3"<< name << endl;
    }
};

//OPERATOR OVERLOAD
class B{
    public :
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"Output "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Main bracket hu "<< this->a << endl;
    }
};

//RUN TIME POLYMORPHISM
class animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Ayush");

    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; 

    obj1();

    Dog pup;
    pup.speak();
    return 0;
}

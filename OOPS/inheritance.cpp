#include<iostream>
using namespace std;

//single level 
class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class dog : public animal{

};

// MULTI LEVEL
class germanspherd : public dog{};

//MULTIPLE INHERITANCE
class human{
    public:
    string color;

    public:
    void bark(){
        cout<<"Barking :"<<endl;
    }
};

class Hybrid: public animal,public human{};


//HEIRARCHICAL INHERITANCE
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main()
{
    
    /*dog d;
    d.speak();
    cout<< d.age <<endl;*/

    /*germanspherd g;
    g.speak();

    Hybrid obj1;
    obj1.bark();
    obj1.speak();*/

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
    

    return 0;
}

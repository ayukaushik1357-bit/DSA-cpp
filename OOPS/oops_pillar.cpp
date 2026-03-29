#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
       string name;
       int age;
       int height;

    public:
    int getAge(){
        return this -> age;
    }
};

class human{
    public:
       int weight;
       int age;
       int height;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    }

};

class male: protected human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping "<<endl;
    }

    int getHeight(){
        return this->height;
    }
};

int main()
{
    
    student first;

    /*male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.setWeight(85);
    cout<<object1.weight<<endl;
    
    object1.sleep();*/

    male m1;
    cout<< m1.getHeight() <<endl;

    return 0;
}

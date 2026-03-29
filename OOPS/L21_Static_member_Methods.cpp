#include<iostream>
using namespace std;

    // Static data member
class Employee{
    int id;
    static int count;
    // count is static data member of class employee

    public:
      void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
      }      
      void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is number "<<count<<endl;
      }

      static void getCount(void){
        // cout<<id ; error
        cout<<"The value of count is "<<count<<endl;
      }
};
int Employee :: count; //default value is 0 as using static

int main()
{
    Employee ayush,b1,b2;
    ayush.setData();
    ayush.getData();
    Employee::getCount();

    b1.setData();
    b1.getData();
    Employee::getCount();

    b2.setData();
    b2.getData();
    Employee::getCount();

// A method is a function that is specifically defined inside a class.
// It operates on objects and can access class members 

    return 0;
}

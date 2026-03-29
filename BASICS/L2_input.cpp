#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter the number 1 "<<endl; // '<<' is called insertion operator.
    cin>>num1; // '>>' is called extraction operator.

    cout<<"Enter the number 2 "<<endl;
    cin>>num2;

    cout<<"\n The sum of these is "<<num1+num2<<endl;



    return 0;
}
#include<iostream>
using namespace std;

void update(int **p2){
    //p = p + 1;   kuch change nhi hota

    // *p = *p + 1;  Change hota ha

    **p2 = **p2 + 1;


}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Printing p " << p <<endl;
    cout<<"Adress of p "<<&p<<endl;
    cout<<*p2<<endl;

    cout<<"value of i "<<i<<endl;
    cout<<"value of i "<<*p<<endl;
    cout<<"value of i "<<**p2<<endl;

    cout<<"value of p "<< &i <<endl;
    cout<< p << endl;
    cout<< *p2 <<endl;

    cout<<"value of p2 "<<&p <<endl;
    cout<<p2<<endl;

    cout <<"before "<< i <<endl;
    cout <<"before "<< p <<endl;
    cout <<"before "<< p2 <<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;


    return 0;
}

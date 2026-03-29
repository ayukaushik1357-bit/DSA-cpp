#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"using function with 2 argument "<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with 3 argument "<<endl;
    return a+b+c;
}

int volume(double r,int h){
    return (3.14 * r * r * h);  // for cylinder
}
int volume(int a){
    return a*a*a; // for cube
}
int volume(int l,int b,int h){
    return l*b*h; // for rectangle
}
int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cuboid is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,6)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;

    return 0;
}

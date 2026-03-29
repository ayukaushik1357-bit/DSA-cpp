#include<iostream>
using namespace std;

int main()
{

    int arr[10] = {2,6,4,122};

    /*cout<<" Address of first memory block is "<< arr <<endl;
    cout<<" Address of first memory block is "<< &arr[0] <<endl;

    cout<< *arr << endl;
    cout<< *arr + 1 << endl;
    cout<< *(arr + 1) << endl;
    cout<< *(arr) + 1 << endl;
    cout<< arr[2] << endl;
    cout<< *(arr+2) << endl;

    int i = 3;
    cout<< i[arr] <<endl;*/

    int temp[10];
    cout<< sizeof(temp) <<endl;
    cout<< sizeof(*temp) <<endl;
    cout<< sizeof(&temp) <<endl; // 8

    int *ptr = &temp[0];
    cout<< sizeof(ptr) <<endl; // 8
    cout<< sizeof(*ptr) <<endl;
    cout<< sizeof(&ptr) <<endl; // 8

    /*int a[20] = {1,2,3,5};
    cout<<"->"<< &a[0] <<endl;
    cout << &a <<endl;
    cout << a <<endl;

    int *p = &a[0];
    cout<< &p[0] <<endl;
    cout << p <<endl;
    cout <<"->"<< &p <<endl;

    int b[5] = {55,89,12,0};
     
    // b = b+1;  error

    int *pt = &b[5];
    cout<< pt <<endl;
    pt = pt + 1;
    cout<< pt <<endl;*/



    return 0;
}

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// nCr binomial coefficient for n and r
    int nCr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n-r);
    
    return fact_n/((fact_r)*(fact_nr));
    }

int main()
{
    // factorial of a number :
    /*int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    // fibonacci series
    cout<<"The term in fibonacci series at position "<<a<<" is "<<fib(a)<<endl;*/

    // nCr binomial
    cout<<nCr(8,6);
    return 0;
}

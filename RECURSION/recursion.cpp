#include<iostream>
using namespace std;

int fact(int a){
    
    if(a==0)  // base case
        return 1;

    //Recursive relation
    return a*fact(a-1);
}

//Power of 2
int power(int n){

    if(n==0)
       return 1;
    
    int small = power(n-1);
    int big = 2*small;

    return big;
}

// Printing numbers
void print(int n){

    if(n==0)
    return ;

    cout<<n<<endl;
    print(n-1);
}

// Fibonacci 
int fib(int n){
    
    if(n<=1)
    return n;

    return fib(n-1)+fib(n-2);
}

//Say Digit
void sayDigit(int n,string arr[]){
    if(n==0)
    return;

    int digit = n%10;
    n = n/10;

    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}


int main()
{
    /*int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;

    int b;
    cout<<"Enter the number"<<endl;
    cin>>b;
    cout<<power(b)<<endl;

    print(n);
    
    for(int i=0;i<n;i++){
        cout<<fib(i)<<endl;
    }*/

    string arr[10] = {"zero","one","Two","Three","Four","Five",
                        "six","seven","eight","nine"};
    
    int n1;
    cin>>n1;
    cout<<endl;
    sayDigit(n1,arr);
    return 0;
}

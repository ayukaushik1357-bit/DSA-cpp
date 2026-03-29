#include<iostream>
using namespace std;

// Function prototype
//type function-name (arguments);
//int sum(int a, b);  -> not acceptable
//int sum(int ,int); ->  acceptable
int sum(int a,int b);

/*int sum(int a, int b){
    int c = a+b;
    return c;
//A function is a block of code which only runs when it is called.
}*/

// Function to calculate sum of number from 1 to N
    int sumN(int n){
        int sum = 0;
        for(int i=0; i<=n; i++){
            sum = sum+i;
        }
        return sum;
    }

// sum of digit
   int sumOfDigit(int num){
    int digSum = 0;

    while(num>0){
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
   }

// Power
    
    int power(){
        int a,b;
        cin >> a >>b;
        int ans = 1;

        for(int i = 1;i<=b; i++){
            ans = ans * a;
        }
        return ans;
    }

// even and odd
    bool isEven(int a){
        if(a&1){
            return 0;
        }
        else{
            return 1;
        }
    }

// Counting
    void printCounting(int n){
        for(int i=1 ;i<=n ;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

int main()
{
    /*int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter first number"<<endl;
    cin>>num2;
    cout<<"The sum of num1 and num2 is "<<sum(num1 ,num2)<<endl;
    void g(void);*/

    cout << sumN(5) <<endl;

    cout<<sumOfDigit(145)<<endl;

    cout<<power()<<endl;

    int num;
    cin>>num;
    if (isEven(num)){
        cout<<"Number is Even "<<endl;
    }
    else{
        cout<<"Number is odd "<<endl;
    }

    int n;
    cin>>n;
    printCounting(n); // function calling
    
    return 0;
}
int sum(int a, int b){
 //formal parameters a and b will be taking values from actual parameters num1 & num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello goof morning";
}

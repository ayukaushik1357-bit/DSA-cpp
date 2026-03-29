#include<iostream>
using namespace std;

inline int product(int a, int b) {
    // Not recommended to use below lines with inline functions
    // static int c = 0; -> This executes only once
    // c = c+1; Next time this function is run,the value of c will be retained
    // return a*b+c;
    return a * b;
}
float moneyRecieve(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}

int main() {
    int a, b;
    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;
    cout << "The product of a and b is: " << product(a, b) << endl;
/*Since product is small, the compiler might replace product(x, y) 
with x * y directly in the code, avoiding a function call.*/

    int money = 10000;
    cout<<"if you have "<<money<<"rs in your bank,you will recieve "<<moneyRecieve(money)<<" rs after 1 year"<<endl;
    cout<<"For VIP :- if you have "<<money<<"rs in your bank,you will recieve "<<moneyRecieve(money,1.1)<<" rs after 1 year";


    return 0;
}


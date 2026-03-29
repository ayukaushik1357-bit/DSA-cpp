#include<iostream>
using namespace std;

int main()
{
 /* for loop */
    for(int i=0; i<4; i++){
        cout<<i<<endl;
    }

 /* while loop */
     int i=1;
     while(i<5){
        cout<<i<<endl;
        i++;
     }

    /* infinite while loop
    int i = 1;
    while(true){
        cout<<i<<endl;
    }*/

    // Do while loop 
     int i = 1;
     do
     {
        cout<<i<<endl;
        i++;
        if(i == 4){
            break;
        }
     }while(i<10);
     
    // using continue statement :-
    do {
    if (i == 4) {
        i++; // Increment i before skipping
        continue;
    }
    cout << i << endl;
    i++;
    } while (i < 10);

// Sum of numbers from 1 to n
   int n = 10;
   int sum = 0;

   for(int i = 0; i<=n ;i++){
    sum += i;
   }

   cout << "sum = " << sum << endl;

// Sum of all odd number from 1 to n
   
   int oddSum = 0;
   for(int i = 0; i<=n ;i++){
    if(i % 2 != 0){
        oddSum += i;
    }
   }
   cout << oddSum << endl;

// check a number is prime or not
   int num;
   cout << "enter a number :" <<endl;
   cin>>num;
    
   if (num == 1 || num == 2){
    cout<< " Prime number "<< endl;
   }
   for(int i = 2; i*i <= num; i++){
    if(num % i == 0){
        cout<<"Not a prime number"<<endl;
        break;
    }
    else{
        cout<<"Prime number"<<endl;
        break;
    }
   }

    return 0;
}

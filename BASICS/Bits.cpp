#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int place = 1;

    while(n != 0){
        int bit = n & 1;
        ans = (bit * place) + ans;  // Cast pow result to int
        n = n >> 1;
        place *= 10;
    }
    

    cout << "Answer = " << ans << endl;

   /*🔁 Iteration 1:
bit = 5 & 1 = 1
ans = 1 * 1 + 0 = 1
place *= 10 → place = 10
n >> 1 → n = 2

🔁 Iteration 2:
bit = 2 & 1 = 0
ans = 0 * 10 + 1 = 1
place *= 10 → place = 100
n >> 1 → n = 1

🔁 Iteration 3:
bit = 1 & 1 = 1
ans = 1 * 100 + 1 = 100 + 1 = 101
place *= 10 → place = 1000
n >> 1 → n = 0 → loop ends*/

//  BINARY TO DECIMAL
   
   int n1;
   cin>>n1;
   
   int ans2 = 0,base = 1;

   while( n1!=0){
    int digit = n1 % 10;
    if(digit == 1){
    ans2 = ans2 + base;
    }

    base *= 2; // it is for power of 2
    n1 = n1 /10;
    

   }
   cout<<ans2<<endl;

    return 0;
}

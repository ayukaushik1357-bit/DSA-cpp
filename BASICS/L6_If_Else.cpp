#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;

// SELECTION CONTROL STATEMENT: 1>IF ELSE LADDER
    if((age<18) && (age>0)){
        cout<<"you can not come to my party "<<endl;
    }
    else if(age==18){
        cout<<"You can come and will get a kid pass"<<endl;
    }
    else if(age<1){
        cout<<"You are very small"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }

// 2>SWITCH CASE STATEMENTS:
    switch (age)
    {
    case 18 : 
      cout<<"You are 18"<<endl;
        break;

    case 21:
      cout<<"you are 22"<<endl;
    break;

    case 2:
      cout<<"You are 2"<<endl;
    break;

    default:
      cout<<"No special case: "<<endl;
        break;
    }

// Uppercase and lowercase:-
   char ch;
   cout<<"Enter the character : "<<endl;
   cin>>ch;
   if(ch>='a' && ch<='z'){
    cout<<"lowercase";
   }
   else{
    cout<<"Uppercase";
   } 

  // compare this using compare thier ascii value
   cin>>ch;
   if(ch>=65 && ch<=90){  
    cout<<"uppercase";
   }
   else{
    cout<<"lowercase";
   }

// Ternary statement :-
   int n = 45;

   cout << (n >= 0 ? "positive" : "negative") << endl;

    return 0;
}
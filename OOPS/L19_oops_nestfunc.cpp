#include<iostream>
#include<string.h>
using namespace std;

class Binary{
        string s;  // It is private
        public:
          void read(void);
          void chk_bin(void);
          void ones(void);
          void display(void);  // Method to display details
    };

void Binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void Binary :: chk_bin(void){
    chk_bin();
    for(int i = 0;i < s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
        }
    }
}

void Binary :: ones(void){
    for(int i = 0;i < s.length();i++){
        if (s.at(i)=='0'){
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
}

void Binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0;i < s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    /* OOPs - Classes and object
       C++ --> initially called --> C with classes
       class --> extension of structure (in c)
       Structure had limitations
          --> Members are public
          --> No Methods 
          
        *Classes --> can have methods and properties
          -->can make few members as private & few as public
        *Structure in C++ are typedef
        you can declare objects along with class declaration like this
          class Employee{
          // class definition
          } Harry,Ayush;  
        Ayush.salary = 1 makes no sence if salary is private */

    // Nesting of memeber functions:-
    
    Binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}

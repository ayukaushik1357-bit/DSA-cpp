#include<iostream>
using namespace std;

// Array in class :-
class shop{
        int itemId[100];
        int itemPrice[100];
        int counter;
        public:
          void initCounter(void){ counter = 0;}
          void setPrice(void); // setPrice is method here like displayprice
          void displayPrice(void);
    };

void shop :: setPrice(void){
    cout<<"Enter ID of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop dukaan; //object
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}

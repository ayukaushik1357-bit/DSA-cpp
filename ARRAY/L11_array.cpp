#include<iostream>
using namespace std;

// Array with function
    void printArray(int arr[], int size){
        for(int i = 0;i<size;i++) {
            cout<< arr[i] <<" ";
        }
        cout << "Printing done "<<endl;
    }

int main()
{
    int marks[4] = {23,15,45,84};
    int mathMarks[4];
    mathMarks[0]=228;
    mathMarks[1]=22; 
    mathMarks[2]=28; 
    mathMarks[3]=20; 

    cout<<"These are maths marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[2]<<endl;

    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=455; // change the value of array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    int third[3] = {1};

    char ch[5] = {'a','B','s','r'};
    cout<<ch[1]<<endl;

    printArray(mathMarks,4);
    printArray(third,3);
    // printArray(ch,5);  invalid as function was for int

   // Pointers and arrays
    int*p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The valuer of marks[0] is "<<*p<<endl;
    cout<<"The valuer of marks[1] is "<<*(p+1)<<endl;
    cout<<"The valuer of marks[2] is "<<*(p+2)<<endl;
    cout<<"The valuer of marks[3] is "<<*(p+3)<<endl;

   // Find smallest and largest number in Array
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int  i= 0; i<size ;i++){
        if(nums[i] < smallest){
            smallest = nums[i]; 
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest =" << smallest <<endl;
    cout << "largest =" << largest << endl;
    return 0;
}
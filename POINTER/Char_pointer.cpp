#include<iostream>
using namespace std;

void print(int *p){

    cout<< *p <<endl;
    cout<< p << endl;
}

void update(int *p){

    // p = p+1
    // cout<<" inside "<< p <<endl;
    *p = *p + 1;

}

int getSum(int arr[],int n){

    cout<<" size :"<< sizeof(arr)<<endl;

    int sum = 0;
    for(int i=0; i<n ;i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    char ch[6] = "abcde";

    cout<< arr << endl;
    cout << ch <<endl;

    char *c = &ch[0];
    cout<< c <<endl;

    char temp = 'z';
    char *p = &temp;
    cout << p <<endl;

// pointer function

    int value = 5;
    int *pt = &value;

    print(pt);

    cout<< "Before "<< *pt <<endl;   
    update(pt);
    cout<<"After "<< *pt <<endl;

    cout<< "The sum is "<<getSum(arr,5);

    // last ke 3 ka sum
    cout<< "The sum is "<<getSum(arr+3,3);

    return 0;
}

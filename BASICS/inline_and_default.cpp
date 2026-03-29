#include<iostream>
using namespace std;

void func(int a, int b){
    a++;
    b++;
    cout << a <<" "<< b <<endl;
}

inline int getMax(int& a, int& b){
    return (a>b) ? a : b;
}

// Default Argument
void print(int arr[], int n, int start=1){
    for(int i = start; i<n ;i++){
        cout << arr[i] <<endl;
    }
}

int main()
{
    int a = 1, b = 3;
    func(a,b);

    int ans = 0;
    ans = getMax(a,b);
    cout<< ans <<endl;

    a = a + 3;
    b = b + 1;
    ans = getMax(a,b);
    cout<< ans <<endl;

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    print(arr,size);
    cout << endl;
    print(arr,size,2);

    return 0;
}

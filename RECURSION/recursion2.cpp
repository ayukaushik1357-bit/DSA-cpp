#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){

    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;

    else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }    
}


// Array elements sum
int arraySum(int arr[],int n){
    
    if(n==0)
    return 0;

    return arr[0]+arraySum(arr+1,n-1);
}


// Linear search
bool search(int a[],int n,int k){
    if(n == 0){
        return false;
    }
    if(a[0]==k){
        return true;
    }
    else {
        bool answ = search(a+1,n-1,k);
        return answ;
    }
}


// Binary search
bool biSearch(int a[],int s,int e,int k){

     //base case
     if(s>e)
     return false;

     int mid = s+(e-s)/2;
     if(a[mid] == k){
        return true;
     }

     if(a[mid]<k){
        return biSearch(a,mid+1,e,k);
     }
     else{
        return biSearch(a,s,mid-1,k);
     }
}

int main()
{
    int arr[] = {10,11,12,13,14};
    bool sort  = isSorted(arr,5);

    if(sort){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

    int sum = arraySum(arr,5);
    cout<<sum<<endl;

    int key = 2;
    bool yes = search(arr,5,key);
    if(yes){
        cout<<"present"<<endl;
    }
    else{
    cout<<"Not present"<<endl;}

    int key2 = 20;
    cout<<biSearch(arr,0,4,key2)<<endl;

    return 0;
}

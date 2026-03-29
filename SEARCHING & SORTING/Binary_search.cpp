#include<iostream>
using namespace std;

int search(int arr[] ,int size,int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){

        mid = start + (end - start)/2;

        
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int firstOcc(int brr[] ,int n,int key){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        mid = s + (e-s)/2;

        if(brr[mid] == key){
            ans = mid;
            e = mid - 1;  // keep checking on the left side
        }
        else if(key>brr[mid]){
            s = mid + 1;  
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int brr[] ,int n,int key){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        mid = s + (e-s)/2;

        if(brr[mid] == key){
            ans = mid;
            s = mid + 1;  // keep checking on the right side
        }
        else if(key>brr[mid]){
            s = mid + 1;  
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int even[6] = {-1,4,6,8,10,12};
    int odd[5] = {3,8,11,14,16};

    int index = search(even,6,4);

    cout<<"index is "<< index << endl;

    int a[5] = {1,3,3,5,9};
    cout<<"First occurence of 3 is "<<firstOcc(a,5,3)<<endl;

    cout<<"last occurence of 3 is "<<lastOcc(a,5,3)<<endl;



    return 0;
}

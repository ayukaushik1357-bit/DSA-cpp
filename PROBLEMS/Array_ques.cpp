#include<iostream>
using namespace std;

void reverse(int arr[] ,int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
    for(int i = 0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }

}

bool search(int arr[],int size,int key){
    for(int i = 0;i<size; i++){

        if(arr[i] == key){
            return 1;
    }
}
     return 0;
}

int main()
{
    // swap the array

    int arr[6] = {5,-11,88,100,55,0};
    int brr[5] = {4,3,66,20,-88};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

// Linear search
    int a[8] = {4,-5,0,7,77,100,58,41};

    cout<<"Enter the element to be search "<<endl;
    int key;
    cin>>key;

    bool found = search(a,8,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

// Swap alternate elements in array
    int even[4] = {40,-4,2,1};
    int odd[3] = {0,1,2};

    swapAlternate(even,4);
    swapAlternate(odd,3);

    printArray(even,4);
    printArray(odd,3);

    return 0;
}

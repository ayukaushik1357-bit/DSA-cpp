#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int n, int m){
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if( arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

// Print row wise sum
void printSum(int arr[][4],int n,int m){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// Print column wise sum
void printColSum(int arr[][4],int n,int m){
    for(int j=0; j<4; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum += arr[i][j]; 
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// Largest row sum index
int larRowSum(int arr[][4],int n,int m){

    int maxi = INT16_MIN;
    int rowIndex = -1;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The maximum sum is "<< maxi <<endl;
    return rowIndex;
}

int main()
{
    // Create 2d array
    //int arr[3][4];
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // int arr[3][4] = {1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333};


    // Row wise input    (i-> row,j-> column)
    /*for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }*/

    /* Column wise input
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arr[j][i];
        }
    }*/

    // Print this 3*4 matrix array
    cout<<"Printing the element" <<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
                }
                cout << endl;
    }

    cout<< " Enter the element to search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element found" <<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    printSum(arr,3,4);
    printColSum(arr,3,4);

    int ansIndex = larRowSum(arr,3,4);
    cout<<"Max row is at index "<< ansIndex << endl;


    return 0;
}

#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    //int n;
    //cin>>n;

    //variable size array
    //int* arr = new int[n];  // Heap created

    /*Taking input in array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"Answer is "<< ans <<endl;*/

    //delete []arr;


    // Creating 2D Array
   int row, col;
    cin >> row >> col;

    // Creating 2D array
    int** brr = new int*[row];
    for (int i = 0; i < row; i++) {
        brr[i] = new int[col];
    }

    // Taking input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> brr[i][j];
        }
    }

    // Printing output
    cout << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

     // Free allocated memory
    for (int i = 0; i < row; i++) {
        delete[] brr[i];
    }
    delete[] brr;



    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){

    int s = 0,e = v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0 ;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}

void merge(int arr1[],int n, int arr2[],int m, int arr3[]){

    int i=0,j=0,k=0;

    while(i<n && j<m){
    if(arr1[i] < arr2[j]){
        arr3[k++] = arr1[i++];
        /*k++;
        i++;*/
    }
    else{
        arr3[k++] = arr2[j++];
    }
    }

  // copy first array k elements ko
     while(i<n){
        arr3[k++] = arr1[i++];
     }

  // copy kardo second array k remaining element ko
     while(j<m){
        arr3[k++] = arr2[j++];
     }
}

void print (int ans[],int n){
    for(int i = 0;i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    
// REVERSE THE ARRAY
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(8);
    v.push_back(11);
    v.push_back(23);

    vector<int> ans = reverse(v);

    cout<<"printing reverse array"<<endl;
    print(ans);

// MERGE SORTED ARRAY

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    
    int arr3[8] = {0};

    merge(arr1,5, arr2,3, arr3);
    print(arr3,8);


    return 0;
}

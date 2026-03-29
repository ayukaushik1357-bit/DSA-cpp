#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){
    if(i>j)
      return;
    
    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}


// Pallindrome string 
bool check(string str,int i,int j){
    if(i>j)
      return true;

    if(str[i] != str[j])
      return false;
    else{
        return check(str,i+1,j-1);
    }
}

// Power using recursion
int power(int a,int b){
    if(b==0)
    return 1;

    if(b==1)
    return a;

    int ans = power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}


//BUBBLE SORT
void sortArray(int *arr,int n){

    //base case
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}


int main()
{
    string name = "AyuyA";
    reverse(name,0,name.length()-1 );
    cout<<name<<endl;

    bool isPallindrome = check(name,0,name.length()-1 );
    if(isPallindrome){
        cout<<"It is pallindrome"<<endl;
    }
    else{
        cout<<"It is not pallindrome"<<endl;
    }

    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;

    
    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

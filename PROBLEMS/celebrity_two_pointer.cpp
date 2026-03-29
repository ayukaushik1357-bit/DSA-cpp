#include<iostream>
#include<vector>
using namespace std;

bool knows(vector<vector<int>> M,int a, int b){
    return M[a][b];
}

int celebrity(vector<vector<int>> &M, int n)
{
    int i = 0;
    int j = n-1;

    while(i<j){
        if(knows(M,i,j))
            i++;
        else
            j--;
    }

    int candidate = i;

    for(int k=0;k<n;k++){
        if(k != candidate){
            if(knows(M,candidate,k) || !knows(M,k,candidate) ){
                return -1;
            }
        }
    }

    return candidate;

}
int main()
{
    vector<vector<int>> M = {
        {0,1,1},
        {0,0,0},
        {0,1,0}
    };

    int ans = celebrity(M,3);

    if(ans == -1)
        cout<<"No celebrity";
    else
        cout<<"Celebrity is "<<ans;

    return 0;
}

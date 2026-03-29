#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPallindrome(char a[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

// maximum occuring character in the string
    char getMaxOccCharacter(string s){
        int arr[26] = {0};

        //Create an array of count of character
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            //Lowercase
            int number = 0;
            if(ch>='a' && ch<='z'){
                number = ch - 'a';
            }
            else{ //uppercase
                number = ch - 'A';
            }
            arr[number]++;
        }
        // Find maximum occ character
        int maxi = -1,ans = 0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        
        char finalAns = 'a' + ans;
        return finalAns;
    }

int main()
{

    char name[20];

    cout<<"enter your name"<<endl;
    cin>>name;
    // name[2] = '\0';

    cout<<"Your name is ";
    cout<<name<<endl;

    int len = getLength(name);
    cout<<"Length : "<<len <<endl;;

    reverse(name,len);
    cout<< name <<endl;

    cout<< "pallindrome or not " <<checkPallindrome(name,len) <<endl;

    cout<<"CHARACTER IS "<<toLowerCase('b')<<endl;
    cout<<"CHARACTER IS "<<toLowerCase('C')<<endl;

    string s;
    cin >> s;
    cout<< getMaxOccCharacter(s) <<endl;

    return 0;
}


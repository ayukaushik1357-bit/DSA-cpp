#include<iostream>
using namespace std;

int main()
{
// Square pattern
    int n = 4;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }

// star decrease pattern
    for (int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        cout<<endl;
    }

// character pattern
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0 ; j<n ;j++){
            cout << ch;
            ch = ch + 1;
        }
        cout<<endl;
    }

// increasing number square pattern
   int num = 1;
   for(int i=0; i<n; i++){
    for(int j=0;j<n;j++){
        cout<<num<<" ";
        num++;
    }
    cout << endl;
   }

// increasing character square pattern
   char ch = 'A';
    for(int i=0; i<n; i++){
    for(int j=0;j<n;j++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
}

// Triangle star
    for(int i=0; i<n; i++){
    for(int j=0;j<i+1;j++){
        cout << '*';
        cout<<' ';
    }
    cout<<endl;
}

// Triangle number
    for(int i=0; i<n; i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1;
    }
    cout<<endl;
}

// Reverse Triangle 
    for(int i=0; i<n; i++){
    for(int j=i+1;j>0;j--){
        cout<<j;
    }
    cout<<endl;
}

// Floyd triangle 
    int num  = 1;
    for(int i=0; i<n; i++){
    for(int j=0;j<i+1;j++){
        cout<<num<<' ';
        num++;
    }
    cout<<endl;
}

// Inverted triangle pattern
    int num = 4;
    for(int i=0; i<n ; i++){
    for(int j=0;j<i;j++){ // for spaces
        cout<<" ";
    }
    for(int j=0; j<n-i; j++){ // for number
        cout<< (i+1) ;
        // cout<< (i+1) <<" ";  for inverted pyramid
    }
    cout<<endl;
}

// Pyramid pattern 
    for(int i=0; i<n ;i++){
        for(int j=0; j<n-i-1 ;j++){ // for spaces
            cout<<" ";
        }
        for(int j=1; j<=i+1 ;j++){ // for num1
            cout<<j;
        }
        for(int j=i; j>0 ;j--){ // for num2
            cout<<j;
        }
        cout<<endl;
    }

// Hollow Diamond pattern -> break into top and bottom
    for(int i=0; i<n ;i++){
        
        // for space
        for(int j=0; j<n-i-1; j++ ){ 
            cout<<" ";
        }
        cout<<"*";

        // for odd spaces in between star
        if( i !=0 ){
        for(int j=0 ;j<2*i-1 ;j++){ 
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
    }

    // for bottom part--
     for(int i=0; i<n-1; i++){
        // spaces
        for(int j=0; j<i+1; j++){
        cout<<" ";
        }
        cout<<"*";

        if(i != n-2){
            //space
            for(int j=0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
     }

// Butterfly pattern
     for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
 for (int i=n;i>=1;i--){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
    return 0;
}

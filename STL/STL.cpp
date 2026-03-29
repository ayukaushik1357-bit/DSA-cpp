#include<iostream>
using namespace std;

#include<array>

#include<vector>

int main()
{

// STL ARRAY
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};
    int size = a.size();

    for(int i = 0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Empty or not = "<<a.empty()<<endl;

    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;


//STL VECTOR - dynamic array
    vector<int> v;
    cout<<"capacity = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity = "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity = "<<v.capacity()<<endl; // size got double to get next element

    cout<<"size = "<<v.size()<<endl; // kitne element pade ha

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    
    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;


    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

    vector<int> b(5,1);
    cout<<"Print b"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    
     // Declare a vector of size 5, initialized with 0
    vector<int> v1(5, 0);

    // Input elements
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> v1[i];
    }

    /*Display elements
    cout << "The vector elements are: ";
    for(int value:v1){
        cout<<value<<endl;
    }

    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<v1[2]<<endl;
    cout<<v1.at(2)<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    v1.push_back(45);
    v1.pop_back();
    v1.begin();
    v1.end();
    v1.erase(v1.begin()+2);
    v1.erase(v1.begin()+1,v1.end()-1);*/
    v1.insert(v1.begin()+1,4,2);

    vector<int>v2={2,3,5};
    vector<int>v3={20,30,50};
    v2.swap(v3);
    
     cout << "After swapping, v2 contains: ";
    for (int x : v2) cout << x << " ";

    cout << "\nAfter swapping, v3 contains: ";
    for (int x : v3) cout << x << " ";

    //v1.empty();

     for(int value:v1){
        cout<<value<<" ";
    }
    
    int value;
    while(1){
        cin>>value;
        if(value==-1)
        break;
        v1.push_back(value);
    }


    return 0;
}

#include<iostream>
using namespace std;

#include<deque>

#include<list>

#include<stack>

#include<queue>

int main()
{
    
// DEQUE -- double ended que

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" "<<endl;
    }

    //d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"Print first element "<<d.at(1)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;


// LIST STL -
    list<int> l;
    l.push_back(1);
    l.push_front(3);

      for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"Size of list "<<l.size()<<endl;

    //list<int> n(l); copy l list into n
    list<int> n(5,100);
    cout<<"Printing n "<<endl;
     for(int i:n){
        cout<<i<<" ";
    }


// STACK 
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Top element "<<s.top()<<endl;

    s.pop();
    cout<<"Top element "<<s.top()<<endl;

     cout<<"Empty or not "<<s.empty()<<endl;

// QUEUE 

   queue<string> q;

   q.push("kumar");
   q.push("love");
   q.push("babbar");

   cout<<"First element "<<q.front()<<endl;
   q.pop();
   cout<<"First element "<<q.front()<<endl;

// PRIORITY QUEUE
    priority_queue<int> maxi;  // max heap

    priority_queue<int,vector<int>,greater<int> > mini; // min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n1 = maxi.size();
    for(int i = 0;i<n1; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m = mini.size();
    for(int i = 0;i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    return 0;
}

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue( queue<int> &qt){

    // Base case
    if(qt.empty()){
        return;
    }

    int element = qt.front();
    qt.pop();

    reverseQueue(qt);

    qt.push(element);
}

int main()
{
    queue<int> q;
    stack<int> s;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(!q.empty()){
        int element = q.front();
        s.push(element);
        q.pop();
    }
        
    while(!s.empty()){
        int el = s.top();
        q.push(el);
        s.pop();
    }

    // Print the result
    cout<<"Reverse elements : ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout<<endl;

    // USING RECURSION
    queue<int> qt;
    qt.push(1);
    qt.push(2);
    qt.push(3);
    qt.push(4);

    reverseQueue(qt);


    cout<<"Again Reverse elements : ";
    while(!qt.empty()){
        cout << qt.front() << " ";
        qt.pop();
    }


    return 0;
}

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue is "<<q.size()<<endl;

    // Printing a queue by copying elements
    queue<int> copy = q;
    while(!copy.empty()){
        cout<<copy.front()<<" ";
        copy.pop();
    }

    
    return 0;
}

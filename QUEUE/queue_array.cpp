#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int front,rear,size;

    Queue(int size){
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    void push(int val){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = val;
            rear++;
        }
    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
        }
    }

    bool empty(){
        if(front == rear){
            return true;
        }
        else
        return false;
    }

    int getFront(){
        if(empty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};

int main()
{

    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();

    cout << "Queue after pop: ";
    Queue temp = q;

    while(!temp.empty()){
        cout << temp.getFront() << " ";
        temp.pop();
    }
    cout<<endl;

    q.push(6);
    cout << "Queue after push 6: ";
    
    Queue temp2 = q;
    while(!temp2.empty()){
        cout << temp2.getFront() << " ";
        temp2.pop();
    }

    return 0;
}

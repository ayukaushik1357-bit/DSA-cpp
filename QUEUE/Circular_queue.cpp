#include<iostream>
#include<queue>
using namespace std;

class Queue{
    public:
    int *arr;
    int front,rear,size;

    Queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void push(int val){
        if((rear == size-1 && front == 0) || rear == (front-1)%(size-1)){
            cout<<"Queue is full"<<endl;
        }

        if(rear == -1){
            front = rear = 0;
        }
        else if(front != 0 && rear == size-1){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = val;
    }

    void pop(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
        }

        if(front == rear){ //single element
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    bool isEmpty(){
        return front == -1;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else
        return arr[rear];
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
    q.push(5);
    q.push(6);

    cout << "Queue after pop: ";
    Queue temp = q;

    while(!temp.isEmpty()){
        cout << temp.getFront() << " ";
        temp.pop();
    }
    cout<<endl;

    // 2 → 3 → 4 → 5 → 6  front points to 2  rear points to 6

    return 0;
}

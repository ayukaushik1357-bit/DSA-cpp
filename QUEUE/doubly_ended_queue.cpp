#include<iostream>
#include<queue>
using namespace std;

class Deque {
    int *arr;
    int front, rear, size;

public:
    // Initialize your data structure.
    Deque(int n) {
        size = n;
        front = -1;
        rear = -1;
        arr = new int[n];
    }

    // Destructor to free memory
    ~Deque() {
        delete[] arr;
    }

    // Pushes 'X' in the front. Returns true if successful.
    bool pushFront(int x) {
        if (isFull()) return false;

        if (isEmpty()) { 
            front = rear = 0;
        } 
        else if (front == 0) { 
            front = size - 1;
        } 
        else { 
            front--;
        }
        
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back. Returns true if successful.
    bool pushRear(int x) {
        if (isFull()) return false;

        if (isEmpty()) { 
            front = rear = 0;
        } 
        else if (front!=0 && rear == size - 1) { 
            rear = 0;
        } 
        else { 
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    // Pops from front. Returns -1 if empty.
    int popFront() {
        if (isEmpty()) return -1;

        int ans = arr[front];
        if (front == rear) { 
            front = rear = -1;
        } 
        else if (front == size - 1) { 
            front = 0;
        } 
        else { 
            front++;
        }
        return ans;
    }

    // Pops from back. Returns -1 if empty.
    int popRear() {
        if (isEmpty()) return -1;

        int ans = arr[rear];
        if (front == rear) { 
            front = rear = -1;
        } 
        else if (rear == 0) { 
            rear = size - 1;
        } 
        else { 
            rear--;
        }
        return ans;
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1 + size) % size));
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break; // We reached the end
            i = (i + 1) % size;   // Move to the next index circularly
        }
        cout << endl;
    }
};

int main()
{

    Deque dq(5);

    cout << boolalpha; // Prints true/false instead of 1/0

    cout << "Pushing Rear 10: " << dq.pushRear(10) << endl;
    cout << "Pushing Rear 20: " << dq.pushRear(20) << endl;
    cout << "Pushing Front 5: " << dq.pushFront(5) << endl;
    
    cout << "Current Front: " << dq.getFront() << endl; // Should be 5
    cout << "Current Rear: " << dq.getRear() << endl;   // Should be 20

    cout << "Popped Front: " << dq.popFront() << endl; // Should be 5
    cout << "Popped Rear: " << dq.popRear() << endl;   // Should be 20
    
    cout << "Is Deque Empty? " << dq.isEmpty() << endl; // Should be false

    dq.display();
    
    // Adding some elements
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushRear(30);
    dq.pushFront(2);

    dq.display();


    /*deque<int> d;
    d.push_front(12);
    d.push_back(15);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }*/

    return 0;
}

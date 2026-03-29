#include<iostream>
using namespace std;

//Node structure
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

// Stack implementation using linked list
class stack{
    public:
    Node* top;
    int count;

    stack(){
        top = NULL; // initially stack is empty
        count = 0;
    }

    void push(int d){
        Node* temp = new Node(d);
        temp -> next = top;
        top = temp;
        count++;
    }

    int pop(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return -1;
        }

        Node* temp = top;
        top = top->next;
        int val = temp->data;

        delete temp;
        return val;
    }

    int peek() {
        if (top == NULL) {
        cout << "Stack is Empty" << endl;
        return -1;
        }
        return top->data;
    }

    bool isEmpty() {
    return top == NULL;
    }

    int size() {
        return count;
    }
};

int main()
{
    stack st;
    st.push(20);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Popped: " << st.pop() << endl;

    cout << "Top element: " << st.peek() << endl;

    return 0;
}

#include<iostream>
#include<stack>
using namespace std;

// Stack Implementation
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0)
        return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top == -1)
        return true;
        else
        return false;
    }
};

int main()
{
    
    // CREATION
    stack<int> s;

    s.push(3);
    s.push(5);
    s.pop();

    for(int i=0;i<5;i++){
        s.push(i);
    }

    cout<<"Printing last element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size is "<<s.size()<<endl;

    
    // Printing the values by copying them so that stack remains unchange
    stack<int>temp = s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }

    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(43);
    st.push(23);
    st.push(40);
    st.push(50);

    cout<< st.peek() <<endl;
    st.pop();

    cout<< st.peek() <<endl;
    st.pop();

    cout<< st.peek() <<endl;
    st.pop();

    cout<< st.peek() <<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    

    return 0;
}

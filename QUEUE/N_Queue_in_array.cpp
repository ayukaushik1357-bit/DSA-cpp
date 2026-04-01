#include<iostream>
#include<queue>
using namespace std;

class kQueue{
    public:
      int *arr;
      int *front;
      int *rear;
      int *next;
      int freespot;
      int n,k;

    public:
      kQueue(int n,int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];

        for(int i=0;i<k;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        arr = new int[n];
        next = new int[n];

        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        freespot = 0;
      }

      void enqueue(int data,int qn){
        if(freespot == -1){
            cout<<"Queue is overflow "<<endl;
            return;
        }

        // FIND INDEX
        int index = freespot;

        //UPDATE FREESPOT
        freespot = next[index];

        // FIRST ELEMENT
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        //Update next
        next[index] = -1;
        
        // Point rear to index
        rear[qn-1] = index;

        //push elements
        arr[index] = data;
      }

      int dequeue(int qn){
        //underflow
        if(front[qn-1] == -1){
            cout<<"Queue Underflow "<<endl;
            return -1;
        }

        // Find Index to pop
        int index = front[qn-1];

        //Front ko aage badao
        front[qn-1] = next[index];

        // freespot ko manage kro
        next[index] = freespot;
        freespot = index;

        return arr[index];
      }
};

int main()
{
    
    kQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    // 10 15 20 25

    cout<<q.dequeue(1) <<endl;
    cout<<q.dequeue(2) <<endl;
    cout<<q.dequeue(1) <<endl;
    cout<<q.dequeue(1) <<endl;

    return 0;
}

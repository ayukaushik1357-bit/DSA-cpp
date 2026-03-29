#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    // Constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    

    // destructor
    ~node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value <<endl;
    }
};

void InsertAtHead(node* &head, int d){

    // new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(node* &tail, int d){

    // new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

// Traversing LL
void print(node* &head){
    node* temp = head;

    while(temp!=NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

void InsertAtPosition( node* &tail, node* &head, int d){
    int pos;
    cout<<"Enter the Position ";
    cin>>pos;

    // insert at start
    if(pos == 1){
        InsertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    //insert at last position
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    // creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void delbeg(node* &head){
    node* temp = head;
    temp = head;
    head = head->next;
      delete temp;
}

void delend(node* &head){
     node* temp = head;
      node* prevnode = head;
      
      while(temp->next!=NULL){
          prevnode = temp;
          temp = temp->next;
      }
     prevnode->next = 0;
      delete temp;
}

void deleteNode(int position, node* &head){

    //delete first or start node
    if(position == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp; // memory free
    }
    else{
        //Delete any node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL; 
        delete curr;
    }
}


int main()
{
    
    // create a new node
    node* node1 = new node(10); 
    /*cout << node1 -> data << endl;
    cout << node1 -> next << endl;*/

    // head pointer to node1
    node* head = node1;
    node* tail = node1;
    print(head);

    InsertAtTail(tail,9);
    print(tail);

    InsertAtHead(head,12);
    print(head);

    InsertAtHead(head,15);
    print(head);

    InsertAtPosition(tail,head,22);
    print(head);

    cout << "head " << head -> data <<endl;
    cout << "tail " << tail -> data <<endl;

    delbeg(head);
    print(head);

    delend(head);
    print(head);

    deleteNode(1,head);
    print(head);

    deleteNode(2,head);
    print(head);


    return 0;
}

#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;
    node* prev;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    
    // Destructor
    ~node() {
        int value = this->data;

        // if the node points to another node, free it recursively
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }

        cout << "Memory freed for node with data " << value << endl;
    }
};

// TRAVERSING  LL
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        //cout<<temp -> data<<" with "<<temp->next <<endl;  working
        cout<<temp -> data<<" " ;
        temp = temp->next;
    }
    cout<<endl;
    
}

int getLen(node* head){
    node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(node* &head,int d){

    // Empty list
    if(head == NULL){
    node* temp = new node(d);
    head = temp;
    }
    else{
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(node* &tail,int d){
    
    // Empty list
    if(tail == NULL){
    node* temp = new node(d);
    tail = temp;
    }
    else{
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
       }
}


void insertAtPosition( node* &tail, node* &head, int d){
    int pos;
    cout<<"Enter the Position ";
    cin>>pos;

    // insert at start
    if(pos == 1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void delbeg(node* &head){
    node* temp = head;
    temp -> next -> prev = NULL;
    head = temp -> next;
    temp -> next = NULL;
    delete temp;
}

void delend(node* &head){
    node* temp = head;
    node* prev = head;

    while(temp->next!=NULL){
          prev = temp;
          temp = temp->next;
      }

    prev -> next = NULL;
    delete temp;
}

void deleteNode(int position, node* &head){

    //delete first or start node
    if(position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
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
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    node* node1 = new node(10);
    node* node2 = new node(20);
    node1->next = node2;  // linking nodes

    node* head = node1;
    node* tail = node1;

    print(head);
    cout<<"The length is "<< getLen(head) <<endl;

    insertAtHead(head,5);
    print(head);

    insertAtHead(head,36);
    print(head);

    insertAtTail(tail,50);
    print(head);

    insertAtPosition(tail,head,28);
    print(head);

    delbeg(head);
    print(head);

    delend(head);
    print(head);

    deleteNode(1,head);
    print(head);

    deleteNode(3,head);
    print(head);


    return 0;
}

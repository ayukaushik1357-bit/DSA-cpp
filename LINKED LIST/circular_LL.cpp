#include<iostream>
#include<map>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor
    /*~node(){
    int value = this -> data;
    if(this->next != NULL){
        delete next;
        next = NULL;
    }
    cout<<"Memory is free for node with data "<< value <<endl;
}*/
};

void insertNode(node* &tail,int element,int d){

    //Empty list
    if(tail == NULL){
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
        }
    else{
        //non-empty list

        node* curr = tail;
        while(curr->data != element){
            curr = curr ->next;
        }

        // element found -> curr is representing element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(node* tail){
    node* temp = tail;

    // EMPTY list
    if(tail == NULL){
        cout<<" List is Empty "<<endl;
        return;
    }
   
    do{
        cout << tail->data <<" ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

void deleteNode(node* &tail,int d){

    //empty list
    if(tail == NULL){
        cout<<" List is empty,check again "<<endl;
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != d){
            prev = curr;
            curr = curr -> next; // aage badhte rho
        }

        prev -> next = curr -> next;

        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        // >=2 node LL
        else if(tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}


bool isCircularList(node* head){
    if(head == NULL){
        return false;
    }

    node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp==head){
        return true;
    }
    return false;
}


bool detectLoop(node* head){
    if(head == NULL){
        return false;
    }

    map<node*, bool>visited;
    node* temp = head;
    while(temp != NULL){

        if(visited[temp] == true){
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}


node* floydDetect(node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){ // Added fast->next check
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

node* getStartingNode(node* head){

    if(head == NULL){
        return NULL;
    }

    node* intersection = floydDetect(head);
    node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection -> next;
    }

    return slow;
}


void removeLoop(node* head){

    if(head == NULL){
        return;
    }

    node* startOfLoop = getStartingNode(head);
    node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp -> next = NULL;
}


int main()
{
    node* tail = NULL;
    node* head = NULL;

    // empty list me insert krre ha
    /*insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
    
    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,4);
    print(tail);

    deleteNode(tail,9);
    print(tail);*/

    // Create a linear list manually
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    // Mark the current end of the list
    tail = head->next->next->next->next; // tail is now at 50

    // We point the tail (50) back to the second node (20)
    tail->next = head->next;

    /* Visual Representation of the Loop:
       10 -> 20 -> 30 -> 40 -> 50
             ^                  |
             |__________________|
    */

    if(isCircularList(tail)){
        cout<<"List is circular in nature"<<endl;
    }

    detectLoop(tail);

    if(floydDetect(tail) != NULL){
        cout<< "Cycle is present "<<endl;
    }
    else{
        cout<<"No cycle"<<endl;
    }

    node* loop = getStartingNode(head);
    if(loop != NULL) {
    cout << "Loop Starts at " << loop->data << endl;
    }

    removeLoop(head);
    print(head);

    return 0;
}

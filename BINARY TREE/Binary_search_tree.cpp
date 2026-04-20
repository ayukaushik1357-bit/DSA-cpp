#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBst(Node* &root,int d){
    if(root == NULL){
       root = new Node(d);
       return root;
    }

    if(d < root->data){
        insertIntoBst(root->left,d);
    }
    else{
        insertIntoBst(root->right,d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    
    while(data != -1){
        root = insertIntoBst(root,data);
        cin>>data;
    }
}


void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho chuka h
            cout << endl;
            if (!q.empty())
            { // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void inorder(Node* root){
    //Base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //Base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //Base case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* root,int val){
    if(root == NULL) 
       return NULL;

    if(root->data == val){
        // 0 Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 Child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 Child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            deleteNode(root->right,mini);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteNode(root->left,val);
        return root;
    }
    else{
        root->right = deleteNode(root->right,val);
        return root;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data for BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder traversal is: ";
    postorder(root);
    cout<<endl;

    cout<<"Min value is "<<minVal(root)->data<<endl;
    cout<<"Max value is "<<maxVal(root)->data<<endl;
    
    deleteNode(root,30);
    cout<<"After delete node"<<endl;
    levelOrderTraversal(root);

    
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{ // It is a function declaration.It will return the root of the tree/subtree

    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    // Recursively build the left and right subtrees
    cout << "Enter data for inserting in left of " << data << ":" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << ":" << endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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


void inorder(node* root){
    //Base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //Base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //Base case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void buildFromLevelOrder(node*& root){
    queue<node* >q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // Creating a tree
    /*root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);

    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder traversal is: ";
    postorder(root);
    cout<<endl;*/

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    return 0;
}

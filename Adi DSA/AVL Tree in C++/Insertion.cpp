#include<iostream>
using namespace std;

// creating node structure 
class Node{
    public:
    int data;
    int height;
    Node *left,*right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;

    }
};

// function to find height 
int getHeight(Node*root){
    if(!root)
    return 0;

    return root->height;
}

// function to check or provide value of Balance
int getbalance(Node*root){
    return getHeight(root->left)-getHeight(root->right);
}

// left rotation  R R case 
Node*leftRotation(Node*root){
    Node*child = root->right;
    Node*childleft = child->left;

    child->left = root;
    root->right = childleft;

    root->height = 1+max(getHeight(root->left),getHeight(root->right));
    child->height = 1+max(getHeight(child->left),getHeight(child->right));

    return child;
}

// right rotation  L L case 
Node*rightRotation(Node*root){
    Node*child = root->left;
    Node*childright = child->right;

    child->right = root;
    root->left = childright;

    root->height = 1+max(getHeight(root->left),getHeight(root->right));
    child->height = 1+max(getHeight(child->left),getHeight(child->right));

    return child;
}

// inorder traversal to check the tree 
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);  // Visit left subtree
    cout << root->data << " ";     // Print current node
    inorderTraversal(root->right); // Visit right subtree
}

// function to insert node into tree
Node* insert(Node*root,int key){
    // does not exist 
    if(!root){
        return new Node(key);
    }
    // exist hai
    if(key < root->data)  // left side
    root->left = insert(root->left,key);
    else if(key >root->data) // right side
    root->right = insert(root->right,key);
    else
    return root;  // duplicate are not allowed  

    // update height
    root->height = 1+max(getHeight(root->left),getHeight(root->right));
    // check balancing 
    int balance = getbalance(root);

    // left left case 
    if(balance >1 && key <root->left->data)
    return rightRotation(root);

    // right right case 
    else if(balance < -1 && root->right->data < key )
    return leftRotation(root);

    // left right case 
    else if(balance > 1 && key > root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // right left case 
    else if(balance < -1 && key < root->right->data){
        root->right  = rightRotation(root->right);
        return leftRotation(root);
    }

    // no balancing 
    else{
        return root;
    }
}

int main(){
    Node*root = NULL;
    root = insert(root,10);
    root = insert(root,30);
    root = insert(root,20);
    root = insert(root,50);
    root = insert(root,15);
    root = insert(root,5);

    cout << "Inorder Traversal :"<<endl;
    inorderTraversal(root);
}


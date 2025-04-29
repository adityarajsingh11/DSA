#include<iostream>
#include<queue>
using namespace std;

// node structure 
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;

    }
};
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x == -1)
    return NULL;

    Node* temp = new Node(x);

    // left side 
    cout<<"Enter the left child of "<<x<<":";
    temp->left= BinaryTree();

    // right side 
    cout<<"Enter the Right child of "<<x<<":";
    temp->right = BinaryTree();

    return temp;
}

// Preorder 
void Preorder(Node*root){
    if(root == NULL)
    return ;

    cout <<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

// Inorder 
void Inorder(Node*root){
    if(root == NULL)
    return ;

    
    Inorder(root->left);
    cout <<root->data<<" ";
    Inorder(root->right);
}

// Postorder
void Postorder(Node*root){
    if(root == NULL)
    return ; 

    
    Postorder(root->left);
    Postorder(root->right);
    cout <<root->data<<" ";
}

int main(){
    cout <<"Enter the root element :";
    Node*root;
    root = BinaryTree();

    // preorder
    cout <<"PreOrder";
    Preorder(root);
    cout <<endl;
  
    //Inorder
    cout <<"Inorder";
    Inorder(root);
    cout <<endl;

    // postorder
    cout <<"Postorder";
    Postorder(root);
}
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

int main(){
    cout <<"Enter the root element :";
    Node*root;
    root = BinaryTree();
}
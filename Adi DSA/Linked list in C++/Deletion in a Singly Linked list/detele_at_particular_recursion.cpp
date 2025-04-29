#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

// constructor to initialiazed value
    Node(int value){
        data=value;
        next = NULL;
    }
    
};

// function to delete a node at a particular position using recursion
Node* deleteNode(Node*curr,int x){
    // handling the base case 
    if(x==1){
        Node* temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode(curr->next,x-1);
    return curr;
}

// function to create linked list 
Node* CreateLinkedlist(int arr[],int index,int size){
    // Base case: if index reaches the size, return NULL
    if(index == size){
        return NULL;
    }
    // Create the current node
    Node* temp;
    temp = new Node(arr[index]);

    // Recursively create the rest of the list
    temp->next = CreateLinkedlist(arr,index+1,size);
    return temp;
}


int main(){
    

    // dynamically created
    Node *Head;
    
    int arr[5] = {2,4,6,8,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr,0,5);


     // delete the third position int the linked list 
    Head = deleteNode(Head,3);

   

    

    // Function to print the linked list inside the main function
    Node *temp;
    temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->data<<" ";
        temp =temp->next;
    }
    cout <<endl;

    
}



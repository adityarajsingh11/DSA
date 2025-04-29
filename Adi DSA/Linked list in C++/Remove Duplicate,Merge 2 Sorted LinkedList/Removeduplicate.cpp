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
    
    int arr[7] = {2,2,2,3,3,4,4};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 7);

     // remove Dupicate element in the LinkedList
     Node* curr = Head->next;
     Node* prev = Head;
    
    // jab tak curr exist karega 
    while(curr){
        // if duplicate element is found 
        if(curr->data==prev->data){
            prev->next= curr->next;
            delete curr;
            curr = prev->next;
        }
        // if duplicate element is not found
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }

   

    

    // Function to print the linked list inside the main function
    Node *temp;
    temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->data<<" ";
        temp =temp->next;
    }
    cout <<endl;

    return 0;
}



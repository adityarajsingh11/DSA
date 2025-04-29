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
    
    int arr[5] = {2,4,6,8,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 5);

     // Delete a Node at particilar position of linked list 
    int x = 3; 

    // edge case when x = 1 that means first node 
    if(x==1){
        Node* temp = Head;
        Head = Head->next;
        delete temp;
        }
    else{
        Node* curr = Head;
    Node* prev = NULL;
    
    x--;
    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next= curr->next;
    delete curr; 

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

    
}



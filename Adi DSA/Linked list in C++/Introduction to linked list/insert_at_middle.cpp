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

Node* CreateLinkedlist(int arr[],int index,int size,Node* prev){
    // Base case: if index reaches the size, return NULL
    if(index == size){
        return prev;
    }
    // Create the current node
    Node* temp;
    temp = new Node(arr[index]);
    temp->next = prev;

    // Recursively create the rest of the list
    return CreateLinkedlist(arr,index+1,size,temp);
   
}
int main(){
    

    // dynamically created
    Node *Head;
    
    
    int arr[5] = {2,4,6,8,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 5,NULL);

     // Insert node at particular position

     int x = 3;  // insert position
     int value = 30;
    Node* temp = Head;
    x--;

    while(x--){
        temp = temp->next;
    }
    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

   

    

    // Function to print the linked list inside the main function
    // Node *temp;
    temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->data<<" ";
        temp =temp->next;
    }
    cout <<endl;

    
}



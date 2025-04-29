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
    
    int arr[7] = {0,1,0,2,2,0,1};

     // Create the linked list from the array
    Head = CreateLinkedlist(arr, 0, 7);

    //sorting 0,1,2 
    Node*curr = Head;
    int count0=0,count1=0,count2=0;

    // jab tak curr exist karaga 
    while(curr){
        if(curr->data==0){
        count0++;
        }
        else if(curr->data==1){
        count1++;
        }
        else{
        count2++;
        }
       
       // Reset curr to head
        curr = curr->next;
        
    }
    curr = Head;

    // Assign 0s, 1s, and 2s back into the linked list
    while(count0--){
        curr->data = 0;
        curr = curr->next;
    }
    while(count1--){
        curr->data = 1;
        curr = curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr = curr->next;
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



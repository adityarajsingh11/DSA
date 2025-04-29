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

// function to detect and remove a loop using floyd algorithm
void detectANDremoveloop(Node* Head){
    // by using slow and fast pointer
 Node* slow = Head;
 Node* fast = Head;
 while(fast != NULL && fast->next == NULL){
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast){ // loop detected
    break;
    }

 }
 // no loop detected 
 if(fast != NULL && fast->next ==NULL){
    cout <<"No loop detected "<<endl;
    return;
 }

 //  method by using number of loops 
 slow = fast->next;
 int count = 1;
 while(slow!= fast){
    count++;
    slow = slow->next;
 }

 // after counting the number of nodes 
 slow = Head;
 fast = Head;
 
 // fast ko kitna door rakhna h 
 while(count--){
    fast = fast->next;
 }

 while(slow!= fast ){
    slow = slow ->next;
    fast = fast->next;

 }
 // bring slow to last node 
 while(slow->next  != fast ){
    slow = slow->next;
 }
 slow->next = NULL;
 cout <<"loop deteted and removed "<<endl;
}

// function to print the linked list 
void printlist(Node* Head){
    Node* temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->data<<" ";
        temp =temp->next;
    }
    cout <<endl;
}

int main(){
    

    // dynamically created
    Node *Head;
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 10);
    
    // manually create a loop for testing 
     Node* temp = Head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = Head->next->next->next;  // Creating a loop (node 10 points to node 4) 

   
    // detect and remove the loop
    detectANDremoveloop(Head);
 
   // print the linked list 
   cout << "Linked list after removing the loop";
    printlist(Head);

    
}



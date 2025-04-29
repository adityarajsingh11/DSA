#include<iostream>
using namespace std;

// creating class of Node 
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor to initialized value
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }

};

//  function  to create doubly linked list
Node* CreateDLL(int arr[],int index,int size,Node* back)
{
    // handling base case 
    if(index==size){
        return NULL;

    }
    Node* temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr,index+1,size,temp);
    return temp;
}


int main(){
    
    Node* Head,*Tail;
    Head = NULL;
    Tail = NULL;
    int arr[5] = { 10,20,30,40,50};
    // creating doubly linked list 
    Head = CreateDLL(arr,0,5,NULL);

    int pos = 2;  // Insertion at position 2 (zero-indexed)


    //insert at start
    if(pos==0){
        // linkedlist not exist 
        if(Head==NULL){
            Head = new Node(80);
        }
        // linked list exist krti h
        else{
            Node* temp = new Node(80);
            temp->next = Head;
            Head->prev = temp;
            Head = temp;
        } 

    }

    else{
        
        // insertion at any given position 
        Node* curr = Head;

       // Move to the specified position (1-indexed for convenience)
        while(--pos){  // move at that position 
        curr = curr->next;  // jab tak position n aa jayee aage badathe rhma
        } 

        // insert at end
        if(curr->next ==NULL){
            Node* temp = new Node(80);
            temp->prev = curr;
            curr->next= temp;

        }
        // insert at middle
        else{
           Node* temp = new Node (80);
           temp->next = curr->next;
           temp->prev = curr;
           curr->next = temp;
           temp->next->prev = temp;
        }
    }
     

    // printing the data of linked list 
    Node* trav = Head;
    while(trav){
        cout << trav->data<<" ";
        trav = trav->next;
    }
     return 0;

    }
    
   


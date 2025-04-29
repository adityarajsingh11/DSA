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
    int pos = 5;

    // delete at start
    if(pos==1){
        if(Head != NULL){
        Node* temp = Head;
        Head = Head->next;  // head ko aage badhaya 
        delete temp;

        // if one node exist (edge case)
        if(Head){
            Head->prev = NULL;
        }
        }
    }

    else{
        Node* curr = Head;
        while(--pos){
            curr=curr->next;
        }
        
       // delete at end
       if(curr->next ==NULL){
          curr->prev->next = NULL;
        }
       // delete operation at given position 
       else{
        
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
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
    
   


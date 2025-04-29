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

    // delete operation at end position 
    if(Head != NULL){
        // if one node exist
        if(Head->next == NULL){
            delete Head;
            Head = NULL;
        }

        // more than one element
        else{
            Node* curr = Head;
            while(curr->next){ // last node tak jana h
                curr = curr->next;
            }
            curr->prev->next = NULL;
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
    
   


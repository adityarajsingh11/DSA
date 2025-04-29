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


int main(){
    
    Node* Head=NULL;

    
    // Inserting the node in linked List at start 

    // linked list does not exist 
    if(Head==NULL){
        Head = new Node(5);
    }

    // if linked list exist 
    else 
    {
        Node* temp = new Node(5);
        temp->next= Head;
        Head->prev = temp;
        Head = temp;
    }

    // printing the data of linked list 
    Node* trav = Head;
    while(trav){
        cout << trav->data<<" ";
        trav = trav->next;
    }

}
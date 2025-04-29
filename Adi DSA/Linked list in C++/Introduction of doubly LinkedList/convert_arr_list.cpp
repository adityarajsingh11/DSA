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
    
    Node* Head,*Tail;
    Head = NULL;
    Tail = NULL;
    int arr[5] = { 1,2,3,4,5};

    // inserting element into doubly linked list 
    for(int i =0; i<5;i++){
        // initially list is empty 
        if(Head==NULL){
            Head = new Node(arr[i]);
            Tail = Head ;
        }

        // after one insertion of element in the list 
        else{
            Node* temp = new Node(arr[i]);
            Tail->next = temp;
            temp->prev = Tail;
            Tail = temp;
        }

    
    }
    // printing the data of linked list 
    Node* trav = Head;
    while(trav){
        cout << trav->data<<" ";
        trav = trav->next;
    }
   //   return 0;
    
   

}
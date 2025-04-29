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
int main(){
    

    // dynamically created
    Node *Head;
    Head = NULL;
    int arr[4] = {2,6,5,10};
   

    // insert the node at beginning 
    for(int i=0;i<4;i++)
    {

     // linked list not exist
    if(Head==NULL){
        Head = new Node(arr[i]);
    }

    // linked list exost krti h
    else{
        Node *temp;
        temp = new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
    }

    // print the value
    Node *temp = Head;
    while(temp!=NULL){
        cout <<temp->data<<" ";
        temp =temp->next;
    }

    
}
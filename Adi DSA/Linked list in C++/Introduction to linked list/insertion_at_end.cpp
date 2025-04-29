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
    Node *Head,*Tail;
    Head = NULL;
    Tail = NULL;
    int arr[5] = {2,4,6,8,10};
   

    // insert the node at end position
    for(int i=0;i<5;i++)
    {

     // linked list not exist
    if(Head==NULL){
        Head = new Node(arr[i]);
        Tail = Head;
    }

    // linked list exist krti h
    else{
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
    }

    // print the value
    Node *temp;
    temp = Head;
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->data<<" ";
        temp =temp->next;
    }

    
}
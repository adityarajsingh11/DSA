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


// function of merging of two list 
Node* mergesort(Node* Head1 ,Node* Head2){
    Node* Head = new Node(0); // dummy node
    Node* tail = Head;

    // Head1 and Head2 exist 
    while(Head1 && Head2){
        if(Head1->data <= Head2->data){
            tail->next= Head1;
            Head1 = Head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else{
            tail->next= Head2;
            Head2 = Head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }
    // Append the remaining nodes of either list
    if(Head1){
        tail->next = Head1;
    }
    else{
    // if head2 exist 
    tail->next = Head2;
    }

    // remove extra node
    tail = Head ;
    Head = Head->next ;
    delete tail;
    return Head;
}
int main(){
    

    // dynamically created
    Node *Head;
    
    int arr1[] = {2,3,5,7};
    int arr2[] = {3,4,4,6,8,10};

   // Create two sorted linked lists
    Node* list1 = CreateLinkedlist(arr1, 0, 4);
    Node* list2 = CreateLinkedlist(arr2, 0, 6);

    // merging two linked list 
    Head = mergesort(list1,list2);
    

   

    

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



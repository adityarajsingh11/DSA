#include<iostream>
#include<vector>
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
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 10);

     // Manually create a loop for testing
    Node* temp = Head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = Head->next->next->next;  // Creating a loop (node 10 points to node 4)
 

    // find out the  length of the loop 
    Node* slow = Head;
    Node* fast = Head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next ;
        fast = fast->next->next;

        if(slow == fast)
        break;
    }
    // if loop does not exist 
    if(fast == NULL || fast->next == NULL){
        cout <<"Loop does not exist"<<endl;
        return 0;
    }
    // slow and fast pointer pointing same node
    int count = 1;
    slow = slow->next;
    while(slow != fast){
        count++;
        slow = slow->next;
    }
    cout <<"length of loop: "<< count <<endl;;
    return 0;


    
}



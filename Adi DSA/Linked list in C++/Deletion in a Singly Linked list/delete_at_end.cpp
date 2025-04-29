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
int main(){
    

    // dynamically created
    Node *Head;
    
    int arr[] = {2,4,6,8,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 5);


    //  // delete a  Node at end position of linked list 

     if(Head != NULL){
        // only one node is present
        if(Head->next == NULL){
            Node* temp;
              Head = temp;
            delete temp;
            Head = NULL;
        }

        // more than one Node present 
        else{
            Node* curr = Head;
            Node* prev = NULL;
            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }
            delete curr;
            prev->next = NULL;
        }
     }


   

    

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



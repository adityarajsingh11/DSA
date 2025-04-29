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

// function to check loop is present or not 
bool check(vector<Node*> &visited,Node* curr){
    // Traverse through the visited nodes and check if the current node exists
    for(int i =0;i<visited.size();i++){
        if(visited[i] == curr){
            
            return 1; // loop detected 
        }
    }
    return 0; // no loop 
}
int main(){
    

    // dynamically created
    Node *Head;
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // Create the linked list using recursion
     Head = CreateLinkedlist(arr, 0, 11);
    
    // manually create a loop for testing 
     Node* temp = Head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = Head->next->next->next;  // Creating a loop (node 10 points to node 4) 

    // detect loop in the linked list 
    Node* curr = Head;
    vector<Node*> visited;

    while(curr != NULL){ // jab tak address exist krta h
       // check loop or not
       if(check(visited,curr)){
        cout <<"Loop detected"<<endl;
        return 1;   // if loop exist 

       }
       visited.push_back(curr); // if loop abbi tak exist nhi kiya h
       curr= curr->next;
    }
    cout <<"loop not detected"<<endl;
    return 0;


    

    // Function to print the linked list inside the main function
    // Node *temp;
    // temp = Head;  // Temporary pointer to traverse the list
    // while(temp)  // jab tak temp  exist krta h
    // {
    //     cout <<temp->data<<" ";
    //     temp =temp->next;
    // }
    // cout <<endl;

    // return 0;
}


// hello
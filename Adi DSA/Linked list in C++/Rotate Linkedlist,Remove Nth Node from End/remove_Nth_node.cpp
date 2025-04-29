#include<iostream>
#include<vector>
using namespace std;

// define class for data and next 
class ListNode{
    public:
    int val;
    ListNode* next;
    // constructor to initialize 
    ListNode(int data){
        val = data;
        next = NULL; // next pointer always pointing to the null 
    }
};

// function to create linked list 
ListNode* CreateLinkedlist(int arr[],int index,int size){
    // Base case: if index reaches the size, return NULL
    if(index == size){
        return NULL;
    }
    // Create the current node
    ListNode* temp;
    temp = new ListNode(arr[index]);

    // Recursively create the rest of the list
    temp->next = CreateLinkedlist(arr,index+1,size);
    return temp;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    ListNode* Head;

    // Create the linked list
    Head = CreateLinkedlist(arr, 0, 5);

    // count the number of listnode 
    int count = 0;
    int n = 2;
    ListNode* temp = Head;
    while(temp){
        count++;
        temp = temp->next;

    }
    // updating the value of count 
    count = count -n;

    // handling the edge case (for deleting first node)
    if(count==0){
        temp = Head;
        Head = Head->next;
        delete temp;

    }

    // deleting the node from the end
    ListNode* curr = Head,*prev = NULL;
    while(count--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;  // pointing the next node aftr curr(deleting node)
    delete curr;
    

    


    // Function to print the linked list inside the main function
    temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->val<<" ";
        temp =temp->next;
    }
    cout <<endl;


}
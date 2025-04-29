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

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    ListNode* Head;

     // Create the linked list
    Head = CreateLinkedlist(arr, 0, 10);

   // Remove every Nth node
   ListNode* curr = Head ,* prev = NULL;
   int count = 1;
   int k = 1;


   // edge case (k==1har ek element delete hoga)
   if(k==1){
    //  while (Head) {
    //         curr = Head;
    //         Head = Head->next;
    //         delete curr;
    //     }
    cout <<"All node is deleted"<<endl;

   }
   
   
   while(curr){

    // k==count delete the node
    if(k==count){
        prev->next = curr->next;
        delete curr;
        curr = prev->next;
        count = 1; // after deleting the node update the count 

    }
    else{
        prev = curr;
        curr= curr->next;
        count++;
    }
   }
    


    // Function to print the linked list inside the main function
     ListNode* temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->val<<" ";
        temp =temp->next;
    }
    cout <<endl;


}
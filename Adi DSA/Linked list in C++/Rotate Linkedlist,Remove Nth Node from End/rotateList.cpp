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

  // rotate the LinkedList 
  int k =2; // kitne se rotate karana h

  // finding the number of count 
  int count = 0;
  ListNode* temp = Head;
  while(temp){  // jab tak temp exist karaega 
    count++;
    temp = temp->next;
  }

  // handling edge case 
  k = k%count;
  if(k==0){
    cout << "Original LinkedList: ";
  }
  if(Head == NULL || Head->next ==NULL){
    cout << "Original Linked List";
  }

  // updating count 
  count = count -k;
  ListNode* curr = Head ,*prev =NULL;
  while(count--){
    prev = curr;
    curr = curr->next;
}
prev->next=NULL;
ListNode* Tail = curr;
while(Tail->next != NULL){
    Tail = Tail->next;
}
Tail->next = Head;
Head = curr;

// Function to print the linked list inside the main function
    temp = Head;  // Temporary pointer to traverse the list
    while(temp)  // jab tak temp  exist krta h
    {
        cout <<temp->val<<" ";
        temp =temp->next;
    }
    cout <<endl;


}
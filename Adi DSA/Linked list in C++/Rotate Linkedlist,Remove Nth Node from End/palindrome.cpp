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

    int arr[10] = {1,2,3,3,2,1};
    ListNode* Head;

     // Create the linked list
    Head = CreateLinkedlist(arr, 0, 6);

  // check the palindrome or not 

  // edge case holding one element 
  if(Head->next == NULL){
    cout << "Yes It is palindrome:";
    return 1;
  }

  // firstly find the number of nodes in the linkedlist
  ListNode* temp = Head;
  int count = 0;
  while(temp){  // jab tak temp exist karega 
    count++;
    temp = temp->next;
  }
   
   // dividing the linked list into two list
   count = count / 2;
   
   //  skip the number of nodes
   ListNode* curr = Head,*prev = NULL;
   while(count--){ // count = 3
             prev = curr;
             curr = curr->next;
        } 
        prev->next = NULL; // phele wale list ka aakhiri element

        //  reverse the second list
        ListNode* front = NULL;
        prev = NULL;
        while(curr){
            front = curr->next;
            curr->next = NULL;
            prev = curr;
            curr = front ;

        }

        // prev pointing the second list 
        // Head pointing the first list 

        // check palindrome
        ListNode* head1 = Head,*head2 = prev;
        while(head1 && head2){
            if(head1->val != head2->val){
            cout <<"It is not palindrome:";
            return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        cout << "Yes It is  palindrome:";
        return 1;


    


    // Function to print the linked list inside the main function
    //  ListNode* temp = Head;  // Temporary pointer to traverse the list
    // while(temp)  // jab tak temp  exist krta h
    // {
    //     cout <<temp->val<<" ";
    //     temp =temp->next;
    // }
    // cout <<endl;


}
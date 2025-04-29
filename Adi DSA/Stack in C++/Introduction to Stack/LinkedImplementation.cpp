#include<iostream>
using namespace std;

// class to create the node 
class Node{
    public:
    int data;
    Node* next;
    // constructor to initialize the value
    Node(int value){
        data = value;
        next = NULL;
    }
};
// class to create the stack 
class stack{
    public:
    Node* top;
    int size; // current size of the stack

    // constructor to initialise the value 
    stack(){
        top = NULL;
        size = 0;
    }

    //  function to push element int the stack with ll implementation 
    void push(int value){
        Node*temp = new Node(value);
        // one condition for overflow 
        if(temp == NULL){
            cout <<"stack overflow"<<endl;
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout <<"pushed into the stack "<<value<<endl;
        }
    }

    //function to pop element from the stack 
    void pop(){
        // edge case 
        if(top == NULL){
            cout <<"stack underflow"<<endl;
            return;

        }
        else{
            Node* temp = top;
            top = top->next;
            delete temp;
            size--;

        }
    }
    // function to print top element from the stack
    int peek(){
        if(top==NULL){
            cout <<"stack is empty"<<endl;
            return -1;
        }
        return top->data;

    }
    // function to check empty or not 
    bool Isempty(){
        return top == NULL;
    }
    // function to find the size of the stack
    int Issize(){
        return size;
    }
};
int main(){
    stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
    S.push(8);
    S.pop();
    cout <<"top element of stack "<<S.peek()<<endl;
    cout<<"check the stack is empty or not " <<S.Isempty()<<endl;
    cout<<"size of stack " <<S.Issize()<<endl;
}
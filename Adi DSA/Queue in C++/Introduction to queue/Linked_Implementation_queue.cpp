#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value; 
        next = NULL;
    }
 };
 class Queue{
    public:
    Node*front,*rear;
    // constructor to initialize the value 
    Queue(){
        front = NULL;
         rear = NULL;
    }

     // check empty condition 
     bool Isempty(){
        return  front == NULL;
     }

     // push operation 
     void push(int x){
        if(Isempty()){
            front = new Node(x);
            cout << "Pushed Element:"<<x<<endl;
            rear = front;
            return;
        }
        else{
            rear->next = new Node(x);
            // baap coder for queue overflow condition in linked list 
            if(rear->next == NULL){
                cout << "queue overflow"<<endl;
            }
            cout << "Pushed Element:"<<x<<endl;
            rear = rear->next;
        }
     }

    // pop operation
    void pop(){
        if(Isempty()){
            cout <<"Queue underflow"<<endl;
            return;
        }
        else{
            cout << "Popped element fron queue:"<<front->data<<endl;
            Node*temp = front;
            front = front->next;
            delete temp;
        }
    } 

    // peek operation 
    int peek(){
        if(Isempty()){
            cout << "Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
 
int main(){
    Queue q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    cout<<"Peek element:" << q.peek()<<endl;
    q.pop();
}
#include<iostream>
using namespace std;

// node structure 
class Node{
    public:
    int data;
    Node*prev,*next;
    Node(int value ){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class Deque{
    Node *front,*rear;
    public:
    Deque(){
        front = rear = NULL;
    }

    // push operation at front 
    void push_front(int x){
        if(front == NULL){
            cout <<"Pushed at front :"<< x<<endl;
            front = rear = new Node(x);
            return ;
        }
        else{
            Node*temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout <<"Pushed at front :"<< x<<endl;
            return ;
        }
    }

    // push operation at rear 
    void push_rear(int x){
        if(front == NULL){
            cout <<"Pushed at back :"<< x<<endl;
            front = rear = new Node(x);
            return ;
        }
        else{
            Node*temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout <<"Pushed at back :"<< x<<endl;
            return ;
        }
    }

    // pop operation at front 
    void pop_front(){
        if(front == NULL){
        cout <<"Deque underflow"<<endl;
        return;
        }
       else{
        Node*temp = front;
        cout <<"popped front:"<< temp->data<<endl;
        front= front->next;
        delete temp;

        if(front)  // greater than one node 
        front->prev = NULL;
        else   // if only one node available 
        rear = NULL;
    }
    }

    // pop operation at back 
    void pop_back(){
        if(front == NULL){
        cout <<"Deque underflow"<<endl;
        return;
    }
    else{
        Node*temp = rear;
        cout <<"popped back:"<< temp->data<<endl;
        rear= rear->prev;
        delete temp;

        if(rear)  // greater than one node 
        rear->next = NULL;
        else   // if only one node available kyuke delete hone ke baad rear tho null hi hoga na 
        front = NULL;
    }
    }

    // front element 
    int getfront(){
        if(front==NULL){
            cout <<"Deque is empty"<<endl;
            return -1;
        }
        else
        return front->data;
    }

    // rear element 
    int getrear(){
        if(front == NULL){
            cout <<"Deque is empty"<<endl;
            return -1;
        }
        else
        rear->data;
    }

};

int main(){
      Deque d;
      d.push_front(5);
      d.push_front(15);
      d.push_front(20);
      d.push_front(25);
      d.push_rear(30);
      d.push_rear(80);
      d.push_rear(70);
      cout <<"Front element :"<<d.getfront()<<endl;
}
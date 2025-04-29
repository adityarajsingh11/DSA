#include<iostream>
using namespace std;

 class Queue{
    public:
    int *arr;
    int front,rear;
    int size;
    Queue(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // empty operation 
    bool Isempty(){
        return front == -1;
    }

    // full operation 
    bool IsFull(){
        return rear == size-1;
    }

    // push operation 
    void push(int x){
        if(Isempty()){
            cout << "pushed element into queue:"<< x<<endl;
            front = rear =0;
            arr[0] = x;
        }
        else if(IsFull()){
            cout <<"queue overflow"<<endl;
            return;
        }
        else{
            rear = rear+1;
            arr[rear] = x;
        }
    }

    // pop operation 
    void pop(){
        if(Isempty()){
            cout << "Queue underflow"<<endl;
            return;
        }
        else{
            if(front == rear){  // only one element present
                cout <<"popped from queue:"<<arr[front]<<endl;
                front = rear = -1;
            }
            else{
                cout <<"popped from queue:"<<arr[front]<<endl;
                front = front+1;
            }
            
        }
    }

    // peek opeartion 
    int peek(){
        if(Isempty()){
            cout <<"queue empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
 };

 int main(){

    Queue q(5);
    q.push(15);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    cout<<q.peek()<<endl;
 }
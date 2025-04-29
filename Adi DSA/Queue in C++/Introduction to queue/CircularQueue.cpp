#include<iostream>
using namespace std;

// creating class for operation 
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

    // Empty operation 
    bool Isempty(){
        return front == -1;
    }

    // full condition 
    bool Isfull(){
        return (rear+1)%size == front;
    }

    // push operation 
    void push(int x){
        if(Isempty()){
            front = rear = 0;
            arr[0] = x;
        }
        else if(Isfull()){
            cout << "Queue Overflow"<<endl;
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x;
        }

    }

    // pop operation 
    void pop(){
        if(Isempty()){
            cout << "Queue Underflow" <<endl;
            return;
        }
        else{
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front+1)%size;
            }
        }
    }

    // peek operation 
    int peek(){
        if(Isempty()){
            cout << "Queue is Empty" << endl;
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
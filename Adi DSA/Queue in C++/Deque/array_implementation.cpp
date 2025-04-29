#include<iostream>
using namespace std;

class deque{
    int front,rear,size;
    int *arr;
    public:
    deque(int n){
        size = n;
        arr = new int(n);
        front = -1;
        rear = -1;
        }

     // check empty condition
    bool Isempty(){
        return front== -1;

    }  
    
    // full condition 
    bool Isfull(){
        return (rear+1)%size == front;

    }

    // push at front 
    void push_front(int x){
        if(Isempty()){
            rear = front=0;
            cout <<"pushed front:"<<x<<endl;
            arr[0] = x;
            return;
        }
        else if(Isfull()){
            cout <<"deque overflow"<<endl;
            return;
        }
        else{
            front = (front-1+size)%size;
            arr[front] = x;
            cout <<"pushed front:"<<x<<endl;
            return;
        }
    }

    // push at rear side 
    void push_rear(int x){
        if(Isempty()){
            rear = front=0;
            cout <<"pushed rear:"<<x<<endl;
            arr[0] = x;
            return;
        }
        else if(Isfull()){
            cout <<"deque overflow"<<endl;
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x;
            cout <<"pushed rear:"<<x<<endl;
            return;
        }
    }

    // delete at front 
    void pop_front(){
        if(Isempty()){
            cout <<"Deque underflow"<<endl;
            return;
        }
        else{
            cout <<"Popped front :"<<arr[front]<<endl;
            if(front== rear){
                front = -1;
                rear = -1;
            }
            else{
                front = (front+1)%size;
            }
        }
    }

    // delete at rear side
    void pop_rear(){
        if(Isempty()){
            cout <<"Deque underflow"<<endl;
            return;
        }
        
        else{
            cout <<"Popped rear :"<<arr[rear]<<endl;
            if(front== rear){
                front = -1;
                rear = -1;
            }
            else{
                rear = (rear-1+size)%size;
            }
        }
    }

    // front element 
    int getfront(){
        if(Isempty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    // back element
    int getback(){
        if(Isempty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
};
int main(){
    deque d(4);

    
    d.push_front(20);
    d.push_front(30);
    d.push_front(40);
    d.push_rear(60);
    d.push_rear(90);

    

    d.push_front(100);
    d.push_front(120);

    d.pop_front();
    d.pop_rear();


}
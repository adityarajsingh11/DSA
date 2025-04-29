#include<iostream>
using namespace std;

// creating a class to create a stack 
class stack{
    int top;
    int *arr;
    int size;

    public:
    // constructor to initialize the value 
    stack(int s){
        size = s;
        arr = new int[size];
        top = -1; // initially the stack is empty 

    }

    // function to push element into the stack
    void push(int value){
        if(top==size-1){
            cout <<"stack overflow"<<endl;
            return;
        }
        else{
            top = top+1;
            arr[top] = value;
            cout<<"pushed element:"<<value<<endl;
        }
    }

    // function to pop element from the stack
    void pop(){
        if(top == -1){
            cout <<"stack underflow"<<endl;
            return;
        }
        else{
            cout <<"pop element"<< arr[top]<<endl;
            top = top-1;
        }
    }
    // function to print the top element of the stack 
    int peek(){
        if(top ==-1){
            cout <<"stack is empty "<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
       return top == -1;
       
    }
    // function to find the size of the stack 
    int issize(){
        return top+1;
    }
};

int main(){
    // creating the object 
    stack S(5);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
    S.pop();
    cout <<"size of the stack is "<<S.issize();
}
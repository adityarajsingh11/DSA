#include<iostream>
#include<queue>
using namespace std;

// function to print the element from the queue
void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout << endl;
}

int main(){
    int arr[] = {3,6,2,7,8,11};
    int n = 6;
    int k =3;

    queue<int>q;
    
    // inserting k-1 element into the queue
    for(int i =0;i<k-1;i++)
    q.push(arr[i]);

    for(int i = k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}
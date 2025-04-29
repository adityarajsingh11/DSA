#include<iostream>
#include<queue>
using namespace std;


int solve(int* A, int n1, int B) {
    int sum =0;
    priority_queue<int>p;
    
    for(int i =0;i<n1;i++){
        p.push(A[i]);
    }
    
    // sell the ticket
    while(B && !p.empty()){
        sum = sum+p.top();
        
        if(p.top()-1)
        p.push(p.top()-1);
        
        p.pop();
        B--;
    }
    return sum;
}

int main(){
    int A[4] = {6,4,2,3};
    int B = 5;
    cout << "Profit Maximization is "<<solve(A,4,B);
}

#include<iostream>
using namespace std;

// by using recursive approach
void fun3(int n){
    //base case
    if(n==0){
        cout << "happy birthday"<<endl;
        return ;  // break the loop otherwise repeated print hota 
    }
    cout << n<<" days left for birthday"<<endl;
    fun3(n-1);
}

int main(){
    fun3(3);  // 3 can change to any number
}
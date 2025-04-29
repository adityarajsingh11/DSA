#include<iostream>
using namespace std;

//by using passing 2 argument 

// void print(int num,int N){
//     // base case
//     if(num==N){
//         cout<<num<<endl;
//         return;
//     }
//     cout <<num<<endl;
//     print(num+1,N);

// }
// int main(){
//     int N =10;
//     cout << "by passing 2 argument:"<< endl;
//     print(1,N);
// }

// by using passing 1 argument
void print(int num){
    // base case
    if(num==1){
        cout <<1<< endl;
        return;
    }
    print(num-1);  
    cout << num<<endl;
}
int main(){
    int n=10;
    cout << "by passing 1 argument:"<< endl;
    print(n);
}
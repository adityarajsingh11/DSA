#include<iostream>
using namespace std;

// by passsing 2 argument
// void printeven(int num,int n){
//     // base case
//     if(num>n){  // apply condition
//         return;
//     }
//     cout <<num<<endl;
//     printeven(num+2,n);
// }
// int main(){
//     int n; 
//     cin>>n;
//    cout << "by passing 2 argument:"<<endl;
//     if(n%2 == 1){
//         n--;
//     }
//     printeven(2,n);
// }

// by using passing 1 argument 
void printeven(int n){
    // base case
    if(n==2){
        cout << 2<<endl;
        return;
    }
    printeven(n-2);
    cout <<n<<endl;

}
int main(){
    int n ;
    cin>>n;
    cout << "by passing 1 argument:"<<endl;
    if(n%2==1){
        n--;
    }
    printeven(n);

}
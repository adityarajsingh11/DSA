#include<iostream>
using namespace std;

// void increment(int n){
//     n++;
// }
// int main(){
//     int num = 10;
//     int temp = num;
//     // print value
//     cout << temp<< endl;
//     increment(num);
//     // after increment function not changing
//     cout<< num;

// }
void incre(int *ptr){
    *ptr = *ptr+1;    // yaha value increase kiya 
}
int main(){
    int num=10;
    int temp = num;
    //print value
    cout << "Initial value:"<<temp << endl;
    // after using pointer to increment 
    incre(&num);
    cout <<"After increment by using pointer:"<< num <<endl;
}
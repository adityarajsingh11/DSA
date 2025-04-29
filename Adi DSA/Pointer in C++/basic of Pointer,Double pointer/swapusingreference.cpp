#include<iostream>
using namespace std;
void swapping(int &p1,int &p2){ // pass by pointer

    int temp=p2;
    p2=p1;
    p1=temp;
    cout<<&p1<<endl;
    cout<<&p2<<endl;
}
int main(){
    int first=10,second=20;
    
    // address of first and second
    cout<<&first<<endl;
    cout<<&second<<endl;
    //After swapping values
    swapping(first,second);
    cout<<"first:"<<first<<endl;
    cout<<"Second:"<<second<<endl;

}
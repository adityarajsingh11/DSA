#include<iostream>
using namespace std;
int main(){
    int i =0;
    int arr[5] = {11,4,5,8,3};

    //printing the address and value of first element
    // cout<<arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout << endl;

    // arr[i] = *(arr+i);
    // for(int i=0;i<5;i++){
    //     // printing value of element 
    //     cout<<*(arr+i)<<endl;  

    //     // printing address of all element 
    //     cout<< (arr+i)<< endl;
    // }

    //Arithmetic operator
    // printing address of the element 
    int *ptr=arr;
    for(int i=0;i<5;i++){
        cout << ptr+i<<endl;

    }
    //printing value of the element 
    for(int i=0;i<5;i++){
        cout << *ptr<<" ";
        ptr++;
    }
}
#include<iostream>
using namespace std;
int main(){
    // variable ke liye heap memory allocate kiya h
    int *ptr = new int;
    *ptr=10;       // value assign
    cout<<*ptr<<endl;

    float *p1 = new float;
    *p1 =3.9;
    cout<<*p1<<endl;


    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    
    int *p = new int[n];

    // value daloo
    for(int i=0;i<n;i++)
    p[i]=i+1;

    // value print kiya h
    for(int i=0;i<n;i++)
    cout <<p[i]<<" ";

    // delete dynamic memory from heap
    delete ptr;
    delete p1;
    delete[] p;  // for array memory delete
    
     
}
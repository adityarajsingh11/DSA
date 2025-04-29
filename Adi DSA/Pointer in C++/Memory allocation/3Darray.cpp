#include<iostream>
using namespace std;
int main(){
    int l,b,h;
    cout<<"enter the dimension of 3d array:";
    cin >>l>>b>>h;

    int ***ptr= new int **[l];
    for(int i=0;i<l;i++){

    // create the 2d array
   ptr [i] = new int *[b];
    for(int j=0;j<b;j++)
    ptr[i][j] = new int [h];

}
// given value to 3d array
for(int i=0;i<l;i++)
for(int j=0;j<b;j++)
for(int k=0;k<h;k++)
ptr[i][j][k]=i+j+k;

//print value
for(int i=0;i<l;i++)
for(int j=0;j<b;j++)
for(int k=0;k<h;k++)
cout<<ptr[i][j][k]<<" ";

}
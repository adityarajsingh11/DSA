#include<iostream>
#include<vector>
using namespace std;
int winner(vector<bool>&person,int n,int index,int person_left,int k){
    //base case
    if(person_left == 1){
        for(int i=0;i<n;i++)
        if(person[i]==0)
        return i;
    }
    //  find the position to kill person
    int kill = (k-1)%person_left;

    while(kill--){
        index = (index+1)%n;
        while(person[index]==1) //already kill person
        index = (index+1) % n;
    }
    person[index] =1;    //mark the person as killed

    //next alive person
    while(person[index]==1)
    index = (index+1)%n;
    winner(person,n,index,person_left-1,k);
}
int main(){
    int n=5;
    int k=3;
    vector<bool>person(n,0);
    cout<<"winner:"<<winner(person,n,0,5,3)<<endl;
}
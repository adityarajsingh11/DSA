#include<iostream>
#include<vector>
using namespace std;

int main(){
    //declare vector
    vector<int>v;
    vector<int> v1(5,1);
    // size of vector
    cout <<"size:"<< v.size()<< endl;
    cout <<"capacity:"<< v.capacity()<< endl;
    v.push_back(3);
    v.push_back(5);
   
   cout <<"size:"<< v.size()<< endl;
    cout <<"capacity:"<< v.capacity()<< endl;
    //updatevalue in arrray
    v[1] = 5;
    for(int i:v){
        cout << i <<" ";
    }cout << endl;
    
    cout << "size of v1:"<<v1.size()<< endl;
    cout << "capacity of v1:"<< v1.capacity()<< endl;
    for(int i:v1){
        cout << i <<" ";
    }
    



}
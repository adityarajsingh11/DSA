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
    // yaha size 2 aur capacity 2 hai
    v.erase(v.begin()+1);
    cout << v.size()<<endl;
    cout << v.capacity()<< endl;
    for(int i:v){
        cout << i <<" ";
    }

}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(45);
    v.push_back(34);
    v.push_back(55);
    v.push_back(2);
    // cout<< "before sort:";
    // for(int i : v){
    //     cout << i << " ";
    // }
    // // increasing order 
    // cout << "after sort:";
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }cout << endl;
    // // decreasing order
    // sort(v.begin(),v.end(),greater<int>());
    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }cout<<endl;

    // binary search to check element present or not
    cout << binary_search(v.begin(),v.end(),4)<< endl;
    //index
    cout<< "index :"<< find(v.begin(),v.end(),4)-v.begin()<< endl;
}
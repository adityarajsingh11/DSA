#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(41);
    v.push_back(15);
    v.push_back(15);

    for(int i:v){
        cout << i << " ";
    }cout << endl;
    //copy vector into another vector
    vector<int> a;
    a = v;
    cout << " array a:";
    cout << a.size();
    
    

    

}
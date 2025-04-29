#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[2]= "Aditya ";
    m[7] = "raj";
    m[3] = "singh";
    cout << "before erase :" << endl;
    m.insert({4,"sundar pichai"});   // another way to insert
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    m.erase(7);
    cout << "after erase :" << endl;
     for(auto i : m){
        cout << i.first << " " << i.second << endl;
     }
     auto it = m.find(3);
     for(auto i  = it; i != m.end();i++){
        cout << (*i).first<< " ";
     }
}     // O(logn)
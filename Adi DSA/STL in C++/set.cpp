#include<iostream>
#include<set>
using namespace std;
int main(){             // complexity of all function used in this main function is o(logn)
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(7);
    for(auto i:s){
        cout << i << " ";  //always get sorted set duplicate of set avoided 
    }cout << endl;

    //to erase element in the set 
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);  // erase 2nd element in the set
    for(auto i : s){
        cout << i <<" ";
    }cout << endl;

    cout << "is 4 present :"<< s.count(4) << endl;

    set<int>::iterator itr = s.find(4);
    for(auto it = itr;it!=s.end() ;it++){
        cout << *it << " " ;
    }
}
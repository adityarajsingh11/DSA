#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout << "capacity :" << v.capacity()<< endl;

    v.push_back(1);
     cout << "capacity  :"<< v.capacity()<< endl;

     v.push_back(2);
     cout << "capacity  :"<< v.capacity()<< endl;

     v.push_back(3);
     cout << "capacity  :"<< v.capacity()<< endl;

     cout << "size of array:"<< v.size()<< endl;
     cout << "element at 2 :"<< v.at(2) << endl;
     cout << "front element :"<< v.front()<< endl;
     cout << "back element :"<< v.back()<< endl;

     // using pop function 
     cout << "before pop"<< endl;
     for(int i:v){
        cout << i << " ";
     }
     cout << endl;
     v.pop_back();
     cout << "after pop"<< endl;
     for(int i:v){
        cout << i << " ";
     }
     cout << "before clear "<< v.size()<< endl;
     v.clear();
     cout << "after clear " << v.size() << endl;

}
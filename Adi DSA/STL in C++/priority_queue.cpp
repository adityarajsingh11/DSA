#include<iostream>
#include<queue>

using namespace std;
int main(){
    // to create max element 
    priority_queue<int> maxi;

    //to create min element 
    priority_queue<int,vector<int>,greater<int> > mini ;
     
     // for max element 
    maxi.push(1);
    maxi.push(3);
    maxi.push(6);
    maxi.push(7);
    cout << "size:"<< maxi.size() << endl;
    int n = maxi.size();
    for(int i = 0;i<n;i++){
        cout <<maxi.top()<<" ";
        maxi.pop();
    } cout << endl;

    // for min element 
    mini.push(1);
    mini.push(3);
    mini.push(6);
    mini.push(7);
    cout << "size:"<< mini.size() << endl;
    int m = mini.size();
    for(int i = 0;i<m;i++){
        cout <<mini.top()<<" ";
        mini.pop();
    }cout << endl;

    
    cout << " mini kya empty hai kya :" << mini.empty()<< endl;
    cout << " maxi kya empty hai kya :" << maxi.empty()<< endl;

}

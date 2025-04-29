#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    vector<int> prefix(n);
    cout << "Element of array:";
    for(int i = 0;i<n;i++){
        cin>> prefix[i];
    }
    for(int i =1 ;i<n;i++){
        prefix[i]= prefix[i-1]+prefix[i];
    }
    cout << "after prefix sum oa array:";
    for(int i:prefix){
        cout<< i << " ";
    }


}
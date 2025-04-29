// check array divided into equal part or not
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>v){
    int n = v.size();
    int totalsum = 0;
    for(int i = 0; i<n;i++){
        totalsum += v[i];
    }
    int prefix = 0;
        for(int i = 0;i<n-1;i++){
        prefix +=v[i];
    int ans = totalsum-prefix;
    if(ans == prefix)
    return 1;
    }
   return 0;
   }
int main(){
    int n;
    cout<< "Enter the size of array:";
    cin>> n;
    vector<int> v(n);
    cout<<"Enter the element of array:";
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    cout<<"subarray passible or not:"<< divide(v);


}
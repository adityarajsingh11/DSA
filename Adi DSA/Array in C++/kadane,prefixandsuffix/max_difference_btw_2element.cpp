// #include<iostream>
// #include<algorithm>
// #include<vector>
#include<bits/stdc++.h> // this can be add no need to add header file
using namespace std;
int difference(vector<int> v){
    int maxi = INT16_MIN;
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            maxi = max(maxi,v[j]-v[i]);
        }
        
        
    }
    return maxi;

}
int main(){
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    vector<int> v(n);
    cout << "Enter the element :";
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    cout<< "Maximum difference between 2 element:"<<difference(v);


}
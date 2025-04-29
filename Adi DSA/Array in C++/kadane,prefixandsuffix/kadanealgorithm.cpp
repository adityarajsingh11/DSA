// #include<iostream>
// #include<algorithm>
// #include<vector>
#include<bits/stdc++.h> // this can be add no need to add header file
using namespace std;
int kadanealgorithm(vector<int> v){
    int maxi = INT16_MIN;
    int prefix = 0;
    int n = v.size();
    for(int i =0;i<n;i++){
        prefix +=v[i];
        maxi = max(prefix,maxi);
        //maxi = max(prefix,maxi);
        if(prefix <0)
        prefix = 0;
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
    cout<< "largest sum of contiguous subarray:"<<kadanealgorithm(v);


}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool sum(vector<int> v ,int n,int target){

    sort(v.begin(),v.end());
    

for(int i = 0;i<n-2;i++){
    int ans = target -v[i];
    int start = i+1,end = n-1;

    while(start<end){
        if(v[start]+v[end]== ans)
            return 1;
         else if(v[start]+v[end]>ans)
         end--;
         else
         start++;   
    }
    
  }
  return 0;
}
int main(){
    int n;
    cout << "Enter the size of array:";
    cin>> n;
    vector<int> v(n);
    cout<< "Enter the element of array:";
    for(int i =  0;i<n;i++){
        cin>>v[i];
    }
    //vector<int> v = {1,4,45,6,10,8};
    int target = 13;
   cout << "3 sum possible or not :"<< sum(v,6,target);
}
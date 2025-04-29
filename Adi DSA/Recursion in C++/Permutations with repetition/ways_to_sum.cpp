#include<iostream>
#include<vector>
using namespace std;
int way(vector<int>&arr,int n,int sum){
    //base case
    if(sum==0)
    return 1;
    if(sum<0)
    return 0;

    int ans=0;
    for(int i =0;i<n;i++){
        ans = ans + way(arr,n,sum-arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr={1,5,6};
    int sum =7;

    way(arr,3,sum);
    cout <<way(arr,3,sum);

}



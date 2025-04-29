#include<bits/stdc++.h>
using namespace std;
int ispossible(int stall[],int k ,int n,int mid){
    int cowcount = 1;
    int lastpos = stall[0];
    for(int i =0;i < n;i++){
        if(stall[i]-lastpos >= mid){
            cowcount++;
            if(cowcount == k){
                return true;
            }
            lastpos = stall[i];
        }
    }
    return false;
}
int aggressivecows(int stall[],int n int mid){
    sort(stall.begin(),stall.end());
    int s = 0;
    int maxi= -1;
    for(int i = 0;i < n; i++){
        maxi = max(maxi ,stall[i])
    }
    int e = maxi;
    int ans = -1;
    int mid =  s + (e-s)/2;
    while(s<=e){
        if (ispossible(stall,n ,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid =  s + (e-s)/2;
    }
    return ans;

}
int main(){
    int stall[] ={4,2,1,3,6};
    int k = 2;
    
    cout << "maximim distance" << aggressivecows(stall,5,k) << endl;
        
    
    

}
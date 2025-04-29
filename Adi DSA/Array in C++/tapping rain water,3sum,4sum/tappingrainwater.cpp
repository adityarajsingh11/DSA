#include<iostream>
#include<vector>
using namespace std;
int rainwater(vector<int> height){

//first max height of building
int maxleft = 0,maxright =0,water=0;
int n = height.size();
int maxheight  = height[0],index =0;
for(int i =0;i<n;i++){
    if(height[i]>maxheight){
        maxheight= height[i];
        index = i;
    }
}
// for left part
for(int i = 0;i<index;i++){
    if(maxleft>height[i])
        water += maxleft-height[i];
     else
        maxleft =height[i];
    
}
// for right part
for(int i = n-1;i>index;i--){
    if(maxright>height[i])
    water += maxheight-height[i];
    else
    maxright = height[i];
}
return water;

}

int main(){
    int n;
    cout << "Enter the size of array:";
    cin>> n;
    vector<int> height(n);
    cout<< "Enter the element of array:";
    for(int i =  0;i<n;i++){
        cin>>height[i];
    }
    cout <<"stored rainwater" <<rainwater(height);
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;  // start from 1 to n
    while(i<=n){
        int j = 1;  
         
        while(j<=i){
            cout<<i-j+1<<" ";   //no need to take value observe pattern 

            j=j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}

/*

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1

*/
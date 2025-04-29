#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    while(i<=n){
        // print space(triangle1)
        int space = n-i;             // very important question of pattern printing 
        while(space){
            cout<<" ";
            space = space-1;
        }
        // print triangle2
        int j = 1;
        while(j<=i){
            cout<<j;
            j = j + 1;
        }
        //print triangle3
        int start = i-1;
        while(start){
            cout<<start;
            start = start -1 ;
        }
        cout<< endl;
        i= i + 1;
    }
}    
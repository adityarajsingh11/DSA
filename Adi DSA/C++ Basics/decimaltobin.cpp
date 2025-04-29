#include<iostream>
#include<math.h>    // header file add kiya h
using namespace std;
int main(){
    int n;
    cin >> n;
   
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10 ,i)) + ans ;

        n = n >> 1;  //right shift karenge jan tak 0 nhi aata
        i = i + 1;
    }
    cout << ans <<endl;
}
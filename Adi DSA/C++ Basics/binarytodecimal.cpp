#include<iostream>
#include<math.h>    // header file add kiya h
using namespace std;
int main(){
    int n;
    cin >> n;
   
    int ans = 0;
    int i = 0;
    while(n != 0){
        int digit= n % 10;
        if(digit==1){
            ans = ans +pow(2,i);

        }
        
        
        n = n/10;  //right shift karenge jan tak 0 nhi aata
        i = i + 1;
    }
    cout << ans<<endl;
}
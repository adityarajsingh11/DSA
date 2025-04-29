#include<iostream>
using namespace std;

long long int sqrtinteger(int n){ // long long isliye used kiya hu squrea m integer ki range se bahar chala jta
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
          else if(square < n){
             ans = mid;
                s = mid + 1;
        }
        else{
            e = mid - 1;
        }
         mid = s + (e-s)/2;
        
    }
    return ans;
}
 double moreprecise(int n,int precision,int tempsol){

    double factor = 1;
    double ans = tempsol;

    for(int i = 0;i <precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n;j = j + factor){
            ans = j;
        }
    }
    return ans;
 }

int main(){
    int n ;
    cin >> n;

    int tempsol = sqrtinteger(n);
   // cout<< sqrtinteger(n) << endl;  // this is applicable for perfect square root
   cout << "answer is " << moreprecise(n,3,tempsol)<< endl;

}
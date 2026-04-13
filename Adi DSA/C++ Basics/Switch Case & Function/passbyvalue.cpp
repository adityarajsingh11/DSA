#include<iostream>
using namespace std;
 
void dummy(int n){
    n++;
    cout << "number " << n << endl;

}
int main(){
    int n ;
    cin >> n ;
    dummy(n);
    cout << " here number is "<< n <<endl;
    return 0;
}
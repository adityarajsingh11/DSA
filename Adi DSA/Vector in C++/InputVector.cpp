
#include<iostream>
#include<vector>
using namespace std;
int main(){
    

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "Vector: ";
    for(int i : v){
        cout << i << " ";
    }

    return 0;



}
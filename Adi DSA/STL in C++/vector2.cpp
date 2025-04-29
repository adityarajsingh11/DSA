#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
  // initialisation of each array by one 
    vector<int> a(5,1);

    // if i want to copy element in another copy
    vector<int> last(a);
    cout << "print a "<< endl;
    //for(int i:a){
    //    cout << i << " ";
    //}
     cout << "print last "<< endl;
    for(int i:last){
        cout << i << " ";
    }
}
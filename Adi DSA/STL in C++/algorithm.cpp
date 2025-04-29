#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    

    // adding element to vector
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(5);
    for(int i : v){
        cout << i << " " ;
    }cout << endl;
    //finding element in the vector 
    cout << "Finding 6 :" << binary_search(v.begin(),v.end(),7) << endl;

  // finding minimum and maximum 
    int a = 4;
    int b = 7;
    cout << "max :" << max(a,b) << endl;
    cout << "min :" << min(a,b)<< endl;
    swap(a,b);
    cout << "a :"<< a<< endl;
    cout << "b:" << b << endl;

   // finding reverse of string 
   string abcd = "abcd";
   reverse(abcd.begin(),abcd.end());
   cout << "reverse :" << abcd << endl;

}
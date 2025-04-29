#include<iostream>
using namespace std;
int vowels(string s , int index){
     // base case 
     if(index == -1){
        return 0;
     }
     if(s[index] =='a' || s[index] =='e'|| s[index] =='i'|| s[index] =='o' ||s[index] =='u'){
        return 1+vowels(s,index-1);
         }
         else{
            return vowels(s,index-1);
         }
}
int main(){
    string s = " rohit";
    vowels(s,4);
    cout << vowels(s,4)<<endl;
}
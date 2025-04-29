#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5);
    cout <<"Enter the input: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    // file ko open kro
    ofstream fout ;
    fout.open("zero.txt");
    fout <<"original data:"<<endl;
    for(int i =0;i<5;i++){
        fout <<arr[i]<<" ";
    }
   fout <<endl;
    // for sort the data
    fout <<"sorted data :"<<endl;
    sort(arr.begin(),arr.end());
    for(int i =0;i<5;i++){
        fout <<arr[i]<<" ";
    };
   // fout <<endl;

    fout.close();


}

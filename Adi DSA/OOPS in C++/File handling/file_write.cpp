#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // file ko open karna 
    ofstream fout;
    fout.open("zoom.txt");//create kar dega aur open kar dega 
    // write kar sakta hu
    fout << "Hello world";

    fout.close();// close the file for release the resource
}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;  // fin file name

    // file ko open kro
    fin.open("zoom.txt");

    // file ko read kro
    char c;
    c = fin.get();
    while(!fin.eof()){
        cout <<c;
        c = fin.get();

    };
    fin.close();


}
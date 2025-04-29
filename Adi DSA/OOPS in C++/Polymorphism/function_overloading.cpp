#include<iostream>
using namespace std;
class  area{

    public:

    int calculatearea(int r){ // for circle
        return 3.14*r*r;
    }

    int calculatearea(int l,int b){ // for rectangle
        return l*b;
    }

};
int main(){
    area A1,A2;
   cout<< A1.calculatearea(4)<<endl;
    cout <<A2.calculatearea(3,4)<<endl;

}
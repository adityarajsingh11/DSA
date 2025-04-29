#include<iostream>

#include<exception>

using namespace std;
class exception{

    protected:
    string msg;

    public:

    exception(string msg){
        this->msg=msg;
    }

    string what(){
            return msg;
    }
};
int main(){

    try{
        int *p = new int[10000000000000];
        cout <<"memeory allocation is successfully"<<endl;
        delete []p;
    }
    catch(const exception &e){
        cout <<"exception occur due to :"<<e.what()<< endl;
    }

}
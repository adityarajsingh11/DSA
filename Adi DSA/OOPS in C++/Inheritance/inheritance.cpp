#include<iostream>
using namespace std;
class human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void function(){
        a = 10;
        b=20;
        c=30;
    }
};
int main(){
    human aditya;
    // aditya.a=10;
    // aditya.b=20;
    // aditya.c=30;
    aditya.function();


}
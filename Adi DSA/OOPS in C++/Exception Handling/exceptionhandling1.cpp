// #include<iostream>
// using namespace std;
// int main(){
//     int a ,b;
//     cin>>a>>b;
//     if(b==0){
//         cout <<"divide by zero is not possible"<<endl;
//         return 0;
//     }
//     int c=a/b;
//     cout <<c<<endl;
// }


// by using try ,catch and throw
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin>>a>>b;
    try{
        if(b==0)
        throw "Divide by 0 is not possible";
        int c = a/b;
        cout << c<<endl;
    }
    catch(const char *e){
        cout <<"exception occured:"<<e;
    }
    
}
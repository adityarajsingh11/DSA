#include<iostream>
using namespace std;  
int main(){
    int n;
    cin >> n;
    if (n>0)
    {
        cout<<"NUMBER IS POSITIVE"<<endl;

    }
    else{       // these can be also used by else if which can be used to check multiple condition
        if(n<0)
    {
        cout<<"NUMBER IS NEGATIVE"<<endl;

    }
    else{
        cout<<"NUMBER IS ZERO"<<endl;
    }
    }
}
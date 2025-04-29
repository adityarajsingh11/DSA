#include<iostream>
using namespace std;  
int main(){
    char a;
    cin >> a;
    if(a>='A'&& a<='Z')
    {
        cout << "UPPERCASE"<<endl;

    }
    else if(a>='a'&& a<='z')
    {
    cout<<"LOWERCASE"<<endl;

     }
     else if(a>='0'&& a<='9')
     {
        cout<<"DIGIT"<<endl;
     }


}
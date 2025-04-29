#include<iostream>
using namespace std;


int main(){
    char name[20];
    cout << "Enter the name:"<< endl;
    cin>>name;
    cout<<"My mame is:"<< name<<endl;
    //Entering null character after that index,char array not printed
    name[3] ='\0';

    cout << "My name is :"<<name << endl;

    
}
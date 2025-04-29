#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&&ch<='z')
    return ch;
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}
int main(){
    char name[20];
    cout << "Enter the name:"<< endl;
    cin>>name;
    //Entering null character after that index,char array not printed
    //name[3] ='\0';

    cout << "My name is :"<<name << endl;
    cout << " to lowercase :"<< tolowercase('b')<< endl;
    cout << "to lowercase :" << tolowercase('B')<< endl;


}
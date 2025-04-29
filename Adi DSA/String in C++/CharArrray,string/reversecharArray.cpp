#include<iostream>
using namespace std;


void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
// finding length of char array
int getlength(char name[]){
    int count = 0;
    for(int i = 0;name[i] != '\0'; i++){
        count++;
    }
    return count ;
}
int main(){
    char name[20];
    cout << "Enter the name:"<< endl;
    cin>>name;
    //Entering null character after that index,char array not printed
   // name[3] ='\0';

    cout << "My name is :"<<name << endl;

    // storing length of array
    int len = getlength(name);
    cout << "Length of Array:"<<len<< endl;

//reverse of name
    reverse(name,len);
    cout << "Reverse of name:"<< name<< endl;
}
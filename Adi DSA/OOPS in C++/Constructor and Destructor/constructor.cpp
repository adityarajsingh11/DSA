#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
    int *roi;

    public:

    // default constructor
    Customer(){
        //cout <<"constructor is called"<<endl;
         name="aditya";
        account_number=123;
        balance=1000;
        roi = new int[100];

    }

    // // parameterized constructor
    // Customer(string n,int a,int b){ // 3 parameter le rha h
    //     name=n;
    //     account_number= a;
    //     balance = b;

    // // parameterized constructor
    // Customer(string name,int account_number,int balance){ // 3 parameter le rha h
    //     this->name=name;
    //     this->account_number= account_number;
    //     this->balance = balance;
    // }

    // constructor overloading
    Customer(string n,int a){  // 2 parameter is initilise 
        name=n;
        account_number=a;
        balance= 30;
    }

    // inline constructor 
    inline Customer(string s,int a ,int b):name(s),account_number(a),balance(b){

    }
    void display(){
       cout << name<<" " <<account_number<<" " <<balance<<endl;
    }

    // copy constructor
    Customer(Customer &B){
        name = B.name;
        account_number=B.account_number;
        balance = B.balance;

    }
};
int main(){
    Customer A1;
    Customer A2("sumit",111,2000);
    Customer A3("bittu",222);

    // function call
    A1.display();
    A2.display();
    A3.display();

    Customer A4(A3);  // copy constructor
    A4.display();

    Customer A5;
    A5 = A4;
    A5.display();

}
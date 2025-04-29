#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number,balance;
    

    public:
    // creating class
    customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;

    }

    
    void deposite(int amount ){
        if(amount>0){
            balance = balance+amount;
    
        }
        else{
            cout <<"invalid amount"<<endl;
        }
    }

    

    void display(){
        cout <<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }

    
};

int main(){
    customer A1("aditya",1,1000);
    A1.deposite(1000);
    A1.display();
    
}


#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number,balance,age;
    

    public:
    // creating class
    customer(string name,int account_number,int balance,int age){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        this->age = age;
        
    }

    

    void deposite(int amount ){
        if(amount>0){
            balance = balance+amount;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount >0){
            balance=balance-amount;
            
        }
    }

    void updateage(int age){
        if(age>0 && age<100){
            this->age =age;
        }
    }

    void display(){
        cout <<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }
};

int main(){
    customer A1("aditya",1,1000,11);
    customer A2("mohit",2,2000,23);
    customer A3("sumit",3,4000,34);
    A1.updateage(23);
    A1.display();


}


#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number,balance;
    static int total_customer;   // attribute of the class belongs to class
    static int total_balance;

    public:
    // creating class
    customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance=total_balance+balance;
    }

    static void acceStatic(){
        cout<<"total number of customer:" <<total_customer<<endl;
        cout<<"total balance:" <<total_balance<<endl;
    }

    void deposite(int amount ){
        if(amount>0){
            balance = balance+amount;
            total_balance=total_balance+amount;
        }
        else{
            cout <<"invalid amount"<<endl;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount >0){
            balance=balance-amount;
            total_balance=total_balance-amount;
        }
    }

    void display(){
        cout <<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }

    void display_total(){
        cout << total_customer<<endl;
        cout <<total_balance<<endl;
        
    }
};
int customer::total_customer =0;
int customer::total_balance=0;
int main(){
    customer A1("aditya",1,1000);
    customer A2("mohit",2,2000);

    // A1.display();
    // A2.display();
    // customer A3("rohan",3,3000);
    // A3.display();
    A1.deposite(3000);
    A2.withdraw(500);
    customer::acceStatic();

}


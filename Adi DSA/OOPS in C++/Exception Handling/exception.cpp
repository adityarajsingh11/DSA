// #include<iostream>
// using namespace std;
// class customer{
//     string name;
//     int balance,account_number;

//     // constructor created
//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;

//     }

//     // deposit 
//     void deposit(int amount){
//         if(amount>0){
//               balance=balance+amount;
//               cout << amount<<" is creadited in the account"<<endl;
//         }
//         else{
//             cout <<"amount should be greater than 0"<< endl;
//         }
        
//     }
//     // withdraw
//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             balance=balance-amount;
//             cout << amount <<" is debited from the account"<<endl;
//         }
//         else if(amount<0){
//             cout <<"amount should be greater than 0"<<endl;
//         }
//         else{
//             cout <<"your amount is low"<<endl;
//         }
       
//     }
//      void display(){
//             cout << balance<<endl;
//         }
// };
// int main(){
//     customer C1("aditya",1000,10);
//     C1.deposit(4000);
//     C1.withdraw(6000);
//     C1.display();

// }

// by using try ,catch and throw
// #include<iostream>
// using namespace std;
// class customer{
//     string name;
//     int balance,account_number;

//     // constructor created
//     public:
//     customer(string name,int balance,int account_number){
//         this->name=name;
//         this->balance=balance;
//         this->account_number=account_number;

//     }

//     // deposit 
//     void deposit(int amount){
//         if(amount>0){
//               balance=balance+amount;
//               cout << amount<<" is creadited in the account"<<endl;
//         }
//         else{
//             throw "amount should be greater than 0";
//         }
        
//     }

//     // withdraw
//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             balance=balance-amount;
//             cout << amount <<" is debited from the account"<<endl;
//         }
//         else if(amount<0){
//             cout <<"amount should be greater than 0"<<endl;
//         }
//         else{
//             throw "your amount is low";
//         }
       
//     }
//      void display(){
//             cout << balance<<endl;
//         }
// };
// int main(){
//     customer C1("aditya",1000,10);
//     try{
//     C1.deposit(400);
//     C1.withdraw(6000);
//     C1.deposit(400);
//     }
//     catch(const char *e){
//         cout << "exception occurred:"<<e<<endl;
//     }
//     //C1.display();

// }

#include<iostream>
using namespace std;
class customer{
    string name;
    int balance,account_number;

    // constructor created
    public:
    customer(string name,int balance,int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;

    }

    // deposit 
    void deposit(int amount){
        if(amount>0){
              balance=balance+amount;
              cout << amount<<" is creadited in the account"<<endl;
        }
        else{
            throw runtime_error("amount should be greater than 0");
        }
        
    }

    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance=balance-amount;
            cout << amount <<" is debited from the account"<<endl;
        }
        else if(amount<0){
            throw runtime_error("amount should be greater than 0");
        }
        else{
            throw runtime_error("your amount is low");
        }
       
    }
     void display(){
            cout << balance<<endl;
        }
};

int main(){
    customer C1("aditya",1000,10);
    try{
    C1.deposit(400);
    C1.withdraw(6000);
    C1.deposit(400);
    }
    catch(const runtime_error *e){
        cout << "exception occurred:"<<e<<endl;
    }
    

}
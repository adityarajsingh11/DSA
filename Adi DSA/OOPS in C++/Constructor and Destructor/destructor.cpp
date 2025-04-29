#include<iostream>
using namespace std;
class customer{
    string name;
    int *balance;  // dynamic memory

    public:
    customer(){
        name = "4";
        cout <<"constructor is "<<name<<endl;
        }

    customer(string name){
        this->name = name;
        // balance = new int;
        // *balance = bal;
        cout <<"constructor is "<<name<<endl;

    }
    // destructor
    ~customer(){
        // delete balance;  // release the dynamic memory
        // cout << "destructor is called"<< endl;
        cout <<"destructor is "<<name<<endl;
    }
};
int  main(){
   // customer A1("aditya",1000);  // create object
   customer A1("1"),A2("2"),A3("3");
   customer *A4 = new customer ;
   delete A4;
}
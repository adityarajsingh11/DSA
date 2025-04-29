#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    double balance = 10000.00;
    try{
        double amount;
        // deposite 
        cout <<"Ener the deposit amount:";
        cin>>amount;
        if(amount<=0){
            // cout <<"Invalid amount :"<<endl;
            throw runtime_error("Invalid amount :");
            }
            balance = balance +amount;
            cout <<"available amount :"<<balance <<endl;

            // withdraw 
            cout <<"enter the withdraw amount :";
            cin>>amount ;
            if(amount <=0){
                // cout <<"Invalid withdraw:"<<endl;
                throw runtime_error( "Invalid withdraw:");

            }
            if(amount >balance ){
                // cout <<"insufficient fund:"<<endl;
                throw runtime_error("insufficient fund:");
            }
            // yaha agar deposit withdraw se kam h tho negative ans dega no need to get this answr then using throw 
            balance = balance -amount ;
            cout <<"Available amount :"<<balance <<endl;
    }
    catch(exception& e){
        cout <<"Error:"<<e.what();

    }
}
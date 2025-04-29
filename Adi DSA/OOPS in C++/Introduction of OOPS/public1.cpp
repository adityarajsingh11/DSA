#include<iostream>
using namespace std;
// creating class
class student{
    public:
    string name;
    int age,roll_number;
    string grade;


    public:
    // by using  getter and setter function 
    // setter function
    void setname(string n){
        name=n;
    }
    void setage(int a){
        age=a;
    }
    void setroll_number(int n){
        roll_number=n;
    }
    void setgrade(string s){
        grade=s;
    }

    // getter function
    void getname(){
        cout << name<<endl;
    }
    void getage(){
        cout <<age<<endl;;
    }
    int  getroll_number(){
        return roll_number;
    }
    string getgrade(int pin){
        if(pin==123){
            return grade;

            return " ";
        }
    }
};
int main(){
    student S1;
    S1.setname("Aditya");
    S1.setage(19);
    S1.setroll_number(12);
    S1.setgrade("A+");
     
     // function call
    S1.getname();
    S1.getage();
     
     // by printing in main function
    cout <<S1.getroll_number()<<endl;

    cout <<S1.getgrade(123)<<endl;

   

}
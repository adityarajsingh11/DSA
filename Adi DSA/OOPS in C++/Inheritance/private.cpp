#include<iostream>
using namespace std;
class human{
    string religion,color;

    protected: // agar yaha private h tho access hi nhi honge
   string name;
   int age,weight;
};

class student: private human{
    private:
    int roll_number,fees;

    public:
    // using constructor 
    student(string name ,int age ,int weight,int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees = fees;
     }
     void display(){
        cout << name<<" "<< age<< " "<<weight<<" "<<roll_number<<" "<<fees<<endl;
     }

    
    
};
int main(){
   student A("aditya",19,54,12,200000);
   A.display();


}
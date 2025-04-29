#include<iostream>
using namespace std;
class human{

    protected:
    string name;
    int age;

    public:
    
    // default constructor
    human(){

    };

    human(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout << name<<" "<<age<<endl;
    }

    void work(){
        cout << "I am working"<<endl;
    }
};

class student:public human{
    int roll_number,fees;

    public:
    student(string name,int age,int roll_number,int fees):human(name,age)
    {
        
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display(){
        cout << name <<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};

class teacher:public human{
    int salary;

    public:

    teacher(int salary,string name,int age){
        this->salary=salary;
        this->name=name;
        this->age=age;
    }

    void display(){
        cout << name <<" "<<salary<<" "<<age<<endl;
    }

};
int main(){
    student A("aditya ",19,12,200000);
    A.display();
    
    teacher B(400,"rohit",23);
    B.display();


}
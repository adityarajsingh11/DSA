#include<iostream>
using namespace std;

class person{

       protected:
       string name;

       public:
       
       void introduce(){
        cout <<"My name is:"<<name <<endl;
       }
};

class employee:public person{

    protected:
    int salary;

    public:

    void montly_salary(){
        cout <<"My salary is:"<<salary<<endl;
    }

};

class manager:public employee{
    public:
    string department;

    manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work(){
        cout <<"My department:"<<department<<endl;
    }
    void display(){
        cout << name<<" "<<salary<<" "<<department<<endl;
    }


};

int main(){
     
    manager A("aditya",100000,"IT");
    A.display();
    A.work();
    A.montly_salary();
    A.introduce ();





}
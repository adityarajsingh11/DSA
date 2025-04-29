#include<iostream>
using namespace std;

class human{
    public:
    string name;

    void introduce(){
        cout << "My name is "<<name<<endl;
    }

};

// using virtual to make unique name and introduce to avoid multiple copies
class engineer:public virtual human{
    public:
    string specialization;

    void work(){
        cout <<"I have specialization in:"<<specialization<<endl;
    }
};

class youtuber: public virtual human{

    public:
    int subscriber;

     void contentcreater(){
        cout <<"I have subscriber:"<<subscriber<<endl;
     }

};

class codeteacher:public youtuber,public engineer{
    public:
    int salary;

    codeteacher(string name,int subscriber,string specialization,int salary){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;
        this->salary=salary;

    }
    
    
    void income(){
        cout <<"My salary is :"<<salary<<endl;

    }
    void display(){
        cout <<name<<" "<<subscriber<<" "<<specialization<<" "<<salary<<endl;
    }

    



};
int main(){
    codeteacher A("aditya",1000,"CSE",10000);
    A.introduce();
    A.display();
    
    

}
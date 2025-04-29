#include<iostream>
using namespace std;
class engineer{
    public:
    string specialization;

    void work(){
        cout <<"I have specialization in:"<<specialization<<endl;
    }
};
class youtuber{
    public:
    int subscriber;
     void contentcreater(){
        cout <<"I have subscriber:"<<subscriber<<endl;
     }

};
class codeteacher:public engineer,public youtuber{
    public:
    string  name;
    codeteacher(string name,int subscriber,string specialization){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;

    }
    void showcase(){
        cout <<"My name is:"<<name<<endl;
        work();
        contentcreater();
    }
    void display(){
        cout << name<<" "<<subscriber<<" "<<specialization<<endl;
    }



};
int main(){
    codeteacher A("aditya",1000,"data analytic");
    A.display();
    A.showcase();
    

}
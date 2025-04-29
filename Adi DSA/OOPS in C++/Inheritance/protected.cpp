#include<iostream>
using namespace std;
class human{
    string religion,color;
    public: // agar yaha private h tho access hi nhi honge
   string name;
   int age,weight;
};
class student: protected human{
    int roll_number,fees;

    
    public:
    // within the class access kr skte h
    void fun(string n,int a,int w){
        name=n;
        age = a;
        weight=w;
    }
    void display(){
        cout << name<<" "<<age <<" "<< weight<<endl;
    }
};
int main(){
   student A;
   A.fun("aditya",19,54);
   A.display();


}
#include<iostream>
using namespace std;
// creating class
class student{
    public:
    string name;
    int age,roll_number;
    string grade;
};
int main(){
    student S1;
    S1.name="Aditya";
    S1.age=19;
    S1.roll_number=12;
    S1.grade="A+";
    cout << S1.grade<<endl;


}
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age,roll_number;
    string grade;
};
int main(){
    student *S = new student;
    (*S).name ="Aditya";
    (*S).age =19;
    (*S).roll_number =12;
    (*S).grade = "A+";

    cout <<S->name<<endl;
    cout << S->age<<endl;

}
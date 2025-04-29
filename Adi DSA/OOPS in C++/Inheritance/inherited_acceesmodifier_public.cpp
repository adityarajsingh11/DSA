#include<iostream>
using namespace std;
class human{
    public:
   string name;
   int age,weight;
};
class student: public human{
    int roll_number,fees;
};
int main(){
   student A;
   A.name="aditya";


}
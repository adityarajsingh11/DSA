#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int age;
    string name;
    bool operator < (const person & other)const{
        return age <other.age;
    }
};
int main(){
    set<person>s;
    person P1,P2,P3;
    P1.age = 10,P1.name = "rohit";
    P2.age = 30,P2.name = "mohit";
    P3.age = 5,P3.name = "sumit";

    s.insert(P1);
    s.insert(P2);
    s.insert(P3);

    for(auto it = s.begin();it != s.end();it++){
        cout << it->age <<" "<<it->name <<endl;
    }

}

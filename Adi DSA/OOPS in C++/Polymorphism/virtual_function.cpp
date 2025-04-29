#include<iostream>
#include<vector>
using namespace std;

class animal{

    public:

    virtual void speak(){
        cout <<"hu hu"<<endl;
    }
};

class dog:public animal{

    public:

    void speak(){
        cout << "bark"<<endl;
    }
};

class cat:public animal{

    public:

    void speak(){
        cout << "meow"<<endl;
    }
};
int main(){
    // animal *p;  // point animal type value ko
    // p = new dog();
    // p->speak();

    // dog D1;
    // D1.speak();

    // by creating pointer of base class
    animal *p;
    vector<animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());



// how to print 
    for(int i =0;i<animals.size();i++){
        p=animals[i];
        p->speak();
    }



}
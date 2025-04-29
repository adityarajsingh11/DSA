#include<iostream>
using namespace std;
class complex{

    int real,img;
    public:

// default constructor
    complex(){

    }

    complex(int real,int img){
        this->real=real;
        this->img=img;
}

void display()
{
    cout <<real<<"+i"<<img<<endl;
}

complex operator +(complex &C)
{
    complex ans;
    ans.real = real + C.real;
    ans.img = img + C.img;
    return ans;
}

};
int main(){
    complex C1(3,2);
    complex C2(4,6);
    C1.display();
    C2.display();

    complex C3 = C1+C2;
    C3.display();

}
#include<iostream>
using namespace std;
void fun(int **p){
    //*p =*p+10;
    //p++;
    *p =*p+1;
}
int main(){
    int n=10;
    int *p1=&n; //single pointer
    int **p2=&p1;   //double pointer
    int ***p3=&p2;  // tripple pointer
    // cout<<p1<<endl;
    // cout<<p2<<endl;
    // cout<<&p1<<endl;
    // cout<<p3<<endl;
    // cout<<&p2<<endl;
    // // value ko modify kar do jo n m rakha h
    // *p1=*p1+5;
    // cout<<n <<endl;
    // **p2 =**p2+5;
    // cout<<n<<endl;
    // ***p3 = ***p3+5;
    // cout<<n<<endl;
    cout<<p1<<endl;

    fun(p2);  // p2 having address of p1
    //cout<<n<<endl;
    cout << p1<<endl;
}
#include<iostream>
using namespace std;
void tof(int n,int src,int help,int dest){
    // base case
    if(n==1){
        cout <<"Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
        return ;
    }
    tof(n-1,src,dest,help);
    cout << "Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
    tof(n-1,help,src,dest);
}
int main(){
    tof(3,1,2,3);
}
#include<iostream>
#include<array>

using  namespace std;
int main(){
int basic[3] = {1,2,3,};
array<int,4> a = {2,3,6,5};
int size = a.size();
for(int i = 0;i<size;i++){
    cout << a[i] << " " ;
}
cout << "Element at 2nd Index:"<< a.at(2)<< endl;
cout << "empty or not :"<< a.empty()<< endl;

cout << "first element :"<< a.front()<< endl;
cout << "last element :"<< a.back()<< endl;
}
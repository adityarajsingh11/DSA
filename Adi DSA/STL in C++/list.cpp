#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;
    l.push_front(1);
    l.push_back(2);
    for(int i : l)
    {
        cout << i<< " ";
    }
    cout << endl;
    l.erase(l.begin());
    for(int i : l)
    {
        cout << i<< " ";
    }
    cout << endl;
    cout << "size of list:" << l.size() << endl;
}
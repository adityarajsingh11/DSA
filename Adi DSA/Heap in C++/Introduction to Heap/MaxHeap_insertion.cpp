#include<iostream>
using namespace std;

class Maxheap{
    int *arr;
    int size;
    int tolal_size;
    
    public:
    Maxheap(int n){
        arr = new int[n];
        size = 0;
        tolal_size = n;
    }

    // function to insert 
    void insert(int value){
        // if heap size is available or not 
        if(size == tolal_size){
            cout <<"Heap overflow"<<endl;
            return;
        }

        // always insert in the last of the array
        arr[size] = value;
        int index = size;
        size++;

        // compare it with the parent node 
        while(index > 0 && arr[index] > arr[(index-1)/2]){
            swap(arr[index],arr[(index-1)/2]);

        }
        cout <<arr[index]<<" inserted into the heap"<<endl;

    }
    void print(){
        for(int i =0;i<size;i++){
            cout << arr[i]<<" ";
        }
        cout <<endl;
    }
    
};
int main(){
     Maxheap h(6);
     h.insert(3);
     h.insert(45);
     h.insert(2);
     h.print();
     h.insert(56);
     h.insert(78);
     h.insert(90);
     h.insert(67);
     h.print();

}

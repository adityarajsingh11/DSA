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

    // heapify function 
    void heapify(int index )  // index = 0
    {
        int largest = index;
        int left = 2*index+1;  //left child
        int right = 2*index+2;// right child

        // largest will store the index of element which is greater between left child and right child
        if(left < size &&arr[left] > arr[largest])
        largest = left;
        if(right < size &&arr[right] > arr[largest])
        largest = right;

        if(largest != index){
            swap(arr[index],arr[largest]);
            heapify(largest);
        }
    

    }

    // function to deletion
    void Delete(){
        if(size == 0){
            cout <<"heap unerflow"<<endl;
            return;
        }
        cout <<arr[0]<<" deleted from the top"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0)
        return;

        heapify(0);
    }
    
};
int main(){
     Maxheap h(6);
     h.insert(3);
     h.insert(45);
     h.insert(2);
     h.Delete();
     h.print();
     h.insert(56);
     h.insert(78);
     h.insert(90);
     h.insert(67);
     h.Delete();
     h.print();
     h.Delete();
     h.Delete();
     h.Delete(); 
     h.Delete();
     h.print();
     h.Delete();
     h.Delete();
     h.print();

}


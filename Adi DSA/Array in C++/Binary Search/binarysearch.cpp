#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (start-end)/2;    // chalaki ki h agar mid = (start+end)/2 karte tho error aa jta bde number ke liye

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right side
        if(key>arr[mid]){
            start = mid +1;
        }
        // go to left side
        else{
            end = mid - 1;

        }
        // update the value of mid
        mid= start + (start-end)/2;
    }
        
    return -1;
}

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,5,7,9,11};

    int evenindex = binarysearch(even,6,12);
    cout << " index of 12  "<<evenindex<<endl;

    int oddindex= binarysearch(odd,5,1);
    cout << "index of 1 "<< oddindex<<endl;


}
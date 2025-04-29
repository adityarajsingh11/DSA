#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;    // first occurence h isliye left m jayenge
        }
        else if(arr[mid] < key){ // right m jao
            s = mid + 1;
        }
        else if ( arr[mid] > key){ // left m jao
            e = mid -1;
        }
         mid = s + (e-s)/2;
        }
    return ans;
    
}
int lastocc(int arr[],int n,int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e){
        if(arr[mid] == key){
            ans = mid;         // ans store kar liya
            s = mid+1;    // last occurence nikalna h isliye right m jaunga
        }
        else if(arr[mid] < key){ // right m jao
            s = mid + 1;
        }
        else if ( arr[mid] > key){ // left m jao
            e = mid -1;
        }
         mid = s + (e-s)/2;
        }
    return ans;
}
int main(){
    int arr[5] = {1,2,3,3,5,};
    cout << "first occurence of 3 " << firstocc(arr,5,3) <<endl;

     cout << "last occurence of 3 " << lastocc(arr,5,3) <<endl;
    
}
#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
void swapalternate(int arr[],int size){
    for(int i = 0;i < size ; i= i+2){  // yaha 2 se increment kiya becoz agar 1 se karte tho fhir se swap ho jta
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] = { 2,3,4,5,6,7,8,9};
    int odd[5]  = {11,22,33,44,55};

    swapalternate(even,8);
    printarray(even,8);

    swapalternate(odd,5);
    printarray(odd,5);




}
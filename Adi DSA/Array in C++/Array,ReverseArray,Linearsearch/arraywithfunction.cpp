#include<iostream>
using namespace std;
void printarray(int arr[] , int size){
    cout << "printing the array" << endl;
    //printing the array
    for(int i = 0; i <= size; i++){
        cout << arr[i] << " " ;
    } 
} 

int main(){
    // declare array 
    int number[15];
    cout << endl<< "this is array" << endl;

    // accessing an array
    cout <<endl<< "value at 0 index  " << number[0] << endl;  // garbag value aayenge becoz hmne value hold nhi kiya h
    cout << endl<<" value at 14 index " << number[14]<< endl;
    cout <<endl <<endl <<  "value at 20 index " << number[20] <<endl<< endl;

    // initialise an array 
    int array[3] = {5,7,11};
    cout << " value at 1 index  " << array[1] << endl;

     // initialise a second array
     int second[15] = {2,7};  // yaha hmne kam value se initialise kiya h
    int n = 15;
    printarray(second,15);
    int secondsize = sizeof(second)/sizeof(int);
    cout << endl<<"second size  " << secondsize << endl;

    // initialise a third array
    int third[10]= {0};
     n = 10;
    printarray(third,10);
    int thirdsize = sizeof(third)/sizeof(int);
    cout << endl <<"third size  " << thirdsize << endl; 

    cout << " this is fine" << endl;

    
}
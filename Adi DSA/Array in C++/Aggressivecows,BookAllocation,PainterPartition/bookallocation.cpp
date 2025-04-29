#include <iostream>             // google interview most important question 
using namespace std;

bool ispossible(int books[], int n, int students, int mid) {
    
    int studentCount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++) {
        if ( pagesum + books[i] <= mid) {
            pagesum = pagesum + books[i];
        }
        else{
            studentCount++;
            if (studentCount > students || books[i] > mid) {
                return false;
            } 
            pagesum =books[i];
        }
    }
    return true;
}

int findPages(int books[], int n, int students) {
    int s=  0;
    int sum = 0;
    for(int i = 0;i<n; i++){
        sum = sum + books[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(ispossible(books,n,students,mid)){
            ans =  mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

    
}

int main() {
    
    int books[] = {12, 34, 67, 90};
    int students = 2;
    cout << "Minimum of the maximum number of pages assigned to a student: " << findPages(books, 4, students) << endl;
    
}
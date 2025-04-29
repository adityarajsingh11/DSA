#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool pairwithgivendifference(vector<int> v,int n,int target){
    sort(v.begin(),v.end());
    int s = 0,e = 1;
                                        // n is size
    while(e<n){
        if(v[e]-v[s] ==target){
            return 1;
        }
        else if(v[e]-v[s] < target)
        e++;
        else
        s++;
    }
    return 0;
}

    

int main(){
    vector<int> v = {3,6,4,77,6,1};
    int target = 73;
    cout<< "present or not:" << pairwithgivendifference(v,6,target);
    
    
    

}
    
// 
// #include <iostream>
// #include <unordered_set>

// bool findPairWithGivenDifference(int arr[], int n, int diff) {
//     std::unordered_set<int> elements;

//     for (int i = 0; i < n; ++i) {
//         int num = arr[i];
//         // Check if there is an element in the set such that num - element = diff
//         if (elements.find(num - diff) != elements.end() || elements.find(num + diff) != elements.end()) {
//             return true;
//         }
//         // Insert the current element into the set
//         elements.insert(num);
//     }
//     return false;
// }

// int main() {
//     int arr[] = {5, 20, 3, 2, 50, 80};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int diff = 78;

//     if (findPairWithGivenDifference(arr, n, diff)) {
//         std::cout << "Pair with given difference " << diff << " found." << std::endl;
//     } else {
//         std::cout << "No pair with given difference " << diff << " found." << std::endl;
//     }

//     return 0;
// }

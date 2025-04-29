#include <iostream>
#include <vector>
using namespace std;

vector<int> greaterElements(int arr[], int n) {
    vector<int> ans(n, -1); // Initialize the vector with -1

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                ans[i] = arr[j];
                break;
            }
        }
    }

    return ans; // Return the vector
}

int main() {
    int arr[9] = {8, 6, 4, 7, 4, 9, 10, 8,12}; // Example array
    vector<int> result = greaterElements(arr, 9);

    // Print the result vector
    cout << "Next greater elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}




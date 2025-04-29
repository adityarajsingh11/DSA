#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rearrangeNumbers(vector<int>& nums) {
    vector<int> evens, odds;

    // Separate even and odd numbers using traditional for loop
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if (num % 2 == 0)
            evens.push_back(num);  // Even number
        else
            odds.push_back(num);   // Odd number
    }

    // Sort evens in ascending order
    sort(evens.begin(), evens.end());

    // Sort odds in descending order
    sort(odds.begin(), odds.end(), greater<int>());

    // Print the rearranged numbers
    for (int i = 0; i < evens.size(); i++)
        cout << evens[i] << " ";
    for (int i = 0; i < odds.size(); i++)
        cout << odds[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    rearrangeNumbers(nums);

    return 0;
}
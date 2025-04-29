#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

long long maxGiftsCollected(int* gifts , int k,int n2) {
    priority_queue<int> maxHeap;
    
    for(int i =0;i<n2;i++)
        maxHeap.push(gifts[i]);

    long long totalGifts = 0;
    
    while (k-- && !maxHeap.empty()) {
        int maxGifts = maxHeap.top();
        maxHeap.pop();

        int remaining = floor(sqrt(maxGifts)); // Replace with ⌊sqrt(max gifts)⌋
        maxHeap.push(remaining);
    }

    // Sum up the remaining gifts
    int totalRemaining = 0;
    while (!maxHeap.empty()) {
        totalRemaining += maxHeap.top();
        maxHeap.pop();
    }

    return totalRemaining;
}



int main() {
     int gifts[5] = {25,64,9,4,100};
     cout << maxGiftsCollected(gifts,4,5);
}

    

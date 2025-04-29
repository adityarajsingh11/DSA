#include <iostream>
#include <queue>

using namespace std;

int nchoc(int A, int* B, int n2) {
    // max heap
    priority_queue<int> p;
    
    // Push all chocolates into the max heap
    for (int i = 0; i < n2; i++) {
        p.push(B[i]);
    }

    long long Maxchoc = 0;
    //const int MOD = 1000000007;

    while (A  && !p.empty()) {
        int top_choc = p.top();
    
        
        Maxchoc = Maxchoc+p.top();

        if (top_choc / 2 ) 
            p.push(top_choc / 2);
        
        p.pop();

        A--;
    }

    return Maxchoc % 1000000007;
}

int main() {
    // int A, n2;
    // cout << "Enter number of times chocolates can be eaten (A): ";
    // cin >> A;
    
    // cout << "Enter number of chocolate bags (n2): ";
    // cin >> n2;
    
    // int B[n2];
    // cout << "Enter chocolates in each bag: ";
    // for (int i = 0; i < n2; i++) {
    //     cin >> B[i];
    // }

    // cout << "Maximum chocolates eaten: " << nchoc(A, B, n2) << endl;
    // return 0;
    int A = 5;
    int B[5] = {2,4,8,6,10};
    cout << "Maximum chocolates eaten: " << nchoc(A, B, 5) << endl;
    return 0;

}

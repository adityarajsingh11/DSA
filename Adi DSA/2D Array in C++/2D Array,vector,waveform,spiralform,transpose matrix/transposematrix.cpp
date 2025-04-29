#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;

    // Input the size of the square matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    // Input the matrix elements
    cout << "Enter matrix elements:" <<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose the matrix in place using std::swap
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Display the transposed matrix
    cout << "Transpose of the matrix:"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

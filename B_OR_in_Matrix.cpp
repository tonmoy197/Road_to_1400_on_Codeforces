#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int m, n;
    cin >> m >> n;

    // Input the B matrix
    vector<vector<int>> B(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    // Initialize A matrix with all 1s
    vector<vector<int>> A(m, vector<int>(n, 1));

    // Apply constraints from B
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; ++k) {
                    A[i][k] = 0; // Set row i to 0
                }
                for (int k = 0; k < m; ++k) {
                    A[k][j] = 0; // Set column j to 0
                }
            }
        }
    }

    // Validate the constructed A matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = 0;
            for (int k = 0; k < n; ++k) {
                value |= A[i][k]; // OR all elements in row i
            }
            for (int k = 0; k < m; ++k) {
                value |= A[k][j]; // OR all elements in column j
            }
            if (value != B[i][j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    // If valid, print the result
    cout << "YES" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

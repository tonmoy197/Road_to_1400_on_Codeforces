#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to solve the problem for one test case
void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int totalCount = 0; // Total count of "1543" occurrences

    // Iterate over each layer
    for (int layerIndex = 0; layerIndex < min(n, m) / 2; ++layerIndex) {
        string layer;

        // Collect all characters in the current layer
        for (int col = layerIndex; col < m - layerIndex; ++col) {
            layer += grid[layerIndex][col];
        }
        for (int row = layerIndex + 1; row < n - layerIndex; ++row) {
            layer += grid[row][m - layerIndex - 1];
        }
        for (int col = m - layerIndex - 2; col >= layerIndex; --col) {
            layer += grid[n - layerIndex - 1][col];
        }
        for (int row = n - layerIndex - 2; row > layerIndex; --row) {
            layer += grid[row][layerIndex];
        }

        // Check for "1543" in the layer
        int size = layer.size();
        for (int i = 0; i < size; ++i) {
            if (layer[i] == '1' && 
                layer[(i + 1) % size] == '5' && 
                layer[(i + 2) % size] == '4' && 
                layer[(i + 3) % size] == '3') {
                totalCount++;
            }
        }
    }

    cout << totalCount << endl; // Output the total count of "1543" occurrences
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1647/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // Create a 2D vector to store the table
    vector<vector<int>> a(n, vector<int>(m));

    // Read the table as strings and convert each character to integer
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0'; // Convert '0' or '1' to integer 0 or 1
        }
    }

    // Check all 2x2 subgrids for the condition
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            // Calculate the sum of elements in the current 2x2 subgrid
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];

            // If the sum of the 2x2 subgrid is exactly 3, the table is not elegant
            if (sum == 3) {
                cout << "NO\n";
                return; // Early exit as the table is not elegant
            }
        }
    }

    // If no such 2x2 subgrid is found, the table is elegant
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0); // Fast input/output
    cin.tie(0); // Untie cin and cout to improve performance

    int t;
    cin >> t; // Read number of test cases

    // Process each test case
    while (t--)
        solve();

    return 0;
}

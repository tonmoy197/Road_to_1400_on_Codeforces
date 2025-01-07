#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, best;
    cin >> s;  
    int n = s.size(), L = 0, R = 0;  // `L` and `R` to track the range of transformation

    for (int r = 0; r < n; r++) {  // Iterate over possible right endpoints
        string t = s;  
        int left = r;  

        // Determine the leftmost index (`left`) for optimal flipping
        for (int l = r; l >= 0; l--) {
            if (s[l] == '1' && (t[n - 1 - (r - l)] ^= 1) == '1') {
                left = l;  
            }
        }

        t = s;  
        // Apply the flipping transformation from `left` to `r`
        for (int l = r; l >= left; l--) {
            if (s[l] == '1') t[n - 1 - (r - l)] ^= 1;
        }

        // Update the best result and the range if the new string is lexicographically larger
        if (t > best) best = t, L = left, R = r;
    }

    // Output the result: the full range of the string and the transformation range
    cout << "1 " << n << " " << L + 1 << " " << R + 1 << "\n";
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) solve();  // Solve each test case
    return 0;
}

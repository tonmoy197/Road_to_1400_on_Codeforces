#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int s = 0; // Variable to store the OR of all elements

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s |= a[i]; // Compute OR of the entire array
        }

        int ans = 1; // Minimum length of subarray
        vector<int> last(20, -1); // Last occurrence of each bit (0 to 19)

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 20; j++) {
                if (a[i] & (1 << j)) {
                    last[j] = i; // Update the last occurrence of bit `j`
                }
                if (s & (1 << j)) { // Check if bit `j` is part of the OR of the array
                    ans = max(ans, i - last[j] + 1);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

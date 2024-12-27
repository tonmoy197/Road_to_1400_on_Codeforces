#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the maximum difference
long long calculateDifference(vector<long long>& arr) {
    sort(arr.begin(), arr.end());
    long long maxDiff = 0;
    for (size_t i = 0; i + 1 < arr.size(); i += 2) {
        maxDiff = max(maxDiff, arr[i + 1] - arr[i]);
    }
    return maxDiff;
}

// Function to solve one test case
void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto& x : a) {
        cin >> x;
    }

    long long ans = LLONG_MAX;

    // If n is even, directly calculate the result
    if (n % 2 == 0) {
        ans = calculateDifference(a);
        cout << ans << '\n';
        return;
    }

    // Handle odd case by adding elements intelligently
    for (int i = 0; i < n; ++i) {
        for (int delta : {-1, 1}) {
            vector<long long> modified = a;
            modified.push_back(a[i] + delta);
            ans = min(ans, calculateDifference(modified));
        }
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

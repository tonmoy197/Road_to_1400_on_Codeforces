#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        vector<ll> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        // Calculate maxVal and its position
        int maxPos = 0;
        ll maxVal = a[0] + b[0];
        for(int i = 1; i < n; i++) {
            if(a[i] + b[i] > maxVal) {
                maxVal = a[i] + b[i];
                maxPos = i;
            }
        }

        // Compute the result
        ll ans = maxVal;  // Start with the maximum sum
        for(int i = 0; i < n; i++) {
            if(i != maxPos) {
                ans += max(a[i], b[i]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}

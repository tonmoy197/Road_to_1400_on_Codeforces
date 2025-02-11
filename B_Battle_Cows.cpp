#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll mycow = a[k - 1];
        int pos = n, ans = 0;

        // Find the first position with a value greater than mycow
        for (int i = 0; i < n; i++) {
            if (a[i] > mycow) {
                pos = i;
                break;
            }
        }

        if (pos > k - 1) {
            // No need to swap, mycow can stay
            cout << pos - 1 << "\n";
        }
        else {
            if (pos != 0) ans++;

            // Perform the swap
            swap(a[pos], a[k - 1]);

            for (int i = pos + 1; i < n; i++) {
                if (a[i] > mycow) break;
                ans++;
            }

            cout << max(ans, pos - 1) << "\n";
        }
    }
    return 0;
}

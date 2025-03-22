#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
pair<ll, bool> simulate(ll p, string s, int n) {
    for (int t = 1; t <= n; t++) {
        p += (s[t-1] == 'R' ? 1 : -1);
        if (p == 0) {
            return {t, true};
        }
    }
    return {-1, false};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        auto [m, hit] = simulate(x, s, n);
        if (!hit) {
            cout << 0 << endl;
        } else {
            auto [m0, hit0] = simulate(0, s, n);
            if (!hit0) {
                m0 = 1e18 + 1;
            }
            ll ans = 1 + (k - m) / m0;
            cout << ans << endl;
        }
    }
    return 0;
}
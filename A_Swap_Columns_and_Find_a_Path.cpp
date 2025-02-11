#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n), best(n), full(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        ll sum_best = 0, ans = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            best[i] = max(a[i], b[i]);
            full[i] = a[i] + b[i];
            sum_best += best[i];
        }

        for (int i = 0; i < n; i++) {
            ans = max(ans, sum_best + full[i] - best[i]);
        }

        cout << ans << endl;
    }
    return 0;
}

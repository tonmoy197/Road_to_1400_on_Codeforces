#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    while (t--) {
        int n, k, tot = 0;
        cin >> n >> k;

        int ans[n + 1] = {};
        int f = n;
        for (int i = 1; i <= n; i++) {
            ans[i] = i;
            tot += abs(f - i);
            f--;
        }

        if (k % 2 || tot < k) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            int l = 1, r = n;

            while (k) {
                if ((r - l) * 2 <= k) {
                    k -= (r - l) * 2;
                    ans[l] = r;
                    ans[r] = l;
                    l++, r--;
                } else {
                    l++;
                }
            }

            for (int i = 1; i <= n; i++) {
                cout << ans[i] << ' ';
            }
            cout << "\n";
        }
    }
}

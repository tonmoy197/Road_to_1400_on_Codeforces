#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> pre(n), suf(n), cnt(n);
    int x = 0;

    for (int i = 1; i < n; i++) {
        cnt[a[i - 1]]++;
        while (cnt[x]) {
            x++;
        }
        pre[i] = x;
    }

    x = 0;
    fill(cnt.begin(), cnt.end(), 0);

    for (int i = n - 1; i > 0; i--) {
        cnt[a[i]]++;
        while (cnt[x]) {
            x++;
        }
        suf[i] = x;
    }

    for (int i = 1; i < n; i++) {
        if (pre[i] == suf[i]) {
            cout << 2 << "\n";
            cout << 1 << " " << i << "\n";
            cout << i + 1 << " " << n << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

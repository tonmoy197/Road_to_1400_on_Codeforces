#include <bits/stdc++.h>

using namespace std;

#define MAXN 400001
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int l[MAXN], r[MAXN], sum[MAXN], cnt[MAXN];

void solve() {
    int n;
    cin >> n;
    
    fill(sum, sum + 2 * n + 1, 0);
    fill(cnt, cnt + 2 * n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        cin >> l[i] >> r[i];
        if (l[i] == r[i]) {
            sum[l[i]] = 1;
            ++cnt[l[i]];
        }
    }
    
    for (int i = 2; i <= 2 * n; ++i) {
        sum[i] += sum[i - 1];
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << ((l[i] == r[i] ? cnt[l[i]] <= 1 : sum[r[i]] - sum[l[i] - 1] < r[i] - l[i] + 1) ? "1" : "0");
    }
    cout << '\n';
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
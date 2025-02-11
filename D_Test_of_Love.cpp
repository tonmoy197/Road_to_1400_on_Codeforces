#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    string s;
    cin >> s;
    s = 'L' + s + 'L';

    int x = -1;
    for (int i = 0; i <= n + 1; i++) {
        if (x >= 0 && s[x] == 'W') {
            x = i;
            k--;
        } 
        else if (i == n + 1 || s[i] == 'L' || i - x == m) {
            x = i;
        }
        // cout << x << " ";
        if (x >= 0 && x < n + 1 && s[x] == 'C') {
            cout << "NO" << endl;
            return;
        }
    }
    if (k >= 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}

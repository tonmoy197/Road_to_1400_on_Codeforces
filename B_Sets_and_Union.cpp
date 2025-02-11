#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, ans = 0;
        cin >> n;
        vector<vector<int>> v(n);
        vector<int> a(51, 0);
        set<int> s;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v[i].resize(k);
            for (int &x : v[i]) {
                cin >> x;
                a[x]++;
                s.insert(x);
            }
        }

        for (int i = 1; i <= 50; i++) {
            if (!a[i]) continue;
            set<int> p;
            for (const auto &group : v) {
                if (find(group.begin(), group.end(), i) == group.end()) {
                    p.insert(group.begin(), group.end());
                }
            }
            ans = max(ans, (int)p.size());
        }

        cout << ans << "\n";
    }

    return 0;
}
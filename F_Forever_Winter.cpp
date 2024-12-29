// https://codeforces.com/problemset/problem/1829/F

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(n + 1, 0); // To count degrees of vertices

        // Input edges and count degrees
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            cnt[u]++;
            cnt[v]++;
        }

        map<int, int> cnts;

        // Count frequency of each degree
        for (int i = 1; i <= n; i++) {
            cnts[cnt[i]]++;
        }

        vector<int> v;

        // Collect frequencies in a vector for sorting
        for (auto p : cnts) {
            v.push_back(p.second);
        }

        sort(v.begin(), v.end());

        // for(auto u : v) cout << u << " ";


        // Determine and print x and y
        if (v.size() == 3) {
            cout << v[1] << ' ' << v[2] / v[1] << '\n';
        } else {
            cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
        }
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1711/B
// Problem Logic:
// This program solves the problem of minimizing the "unhappiness value" of a party while ensuring that
// the total number of cakes (friendship pairs where both members are invited) is even.
// The solution involves:
// 1. Checking if the total number of friendships (cakes) is already even (no action needed).
// 2. If the number of cakes is odd, ensuring evenness by either:
//    - Removing a single member with odd-degree friendships (minimal unhappiness cost).
//    - Removing a friendship between two even-degree members (minimal unhappiness cost).
// The goal is to achieve this with the least possible unhappiness.

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
int x[MAXN], y[MAXN], a[MAXN], degree[MAXN];

void solve() {
    int n, m;
    cin >> n >> m;

    // Initialize degrees and read unhappiness values
    fill(degree, degree + n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Read edges and calculate degrees
    for (int i = 1; i <= m; ++i) {
        cin >> x[i] >> y[i];
        degree[x[i]]++;
        degree[y[i]]++;
    }

    int ans = (m % 2 == 0) ? 0 : INT_MAX;

    // Case 1: Find the smallest cost of a single odd-degree node
    for (int i = 1; i <= n; ++i) {
        if (degree[i] % 2 == 1) {
            ans = min(ans, a[i]);
        }
    }

    // Case 2: Find the smallest cost of removing an even-degree edge
    for (int i = 1; i <= m; ++i) {
        if (degree[x[i]] % 2 == 0 && degree[y[i]] % 2 == 0) {
            ans = min(ans, a[x[i]] + a[y[i]]);
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

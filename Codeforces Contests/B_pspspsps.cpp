#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Adjust edges
    if (s[0] == 's') s[0] = '.';
    if (s[n - 1] == 'p') s[n - 1] = '.';

    // Check for mixed 'p' and 's'
    bool hasP = false, hasS = false;
    for (char c : s) {
        if (c == 'p') hasP = true;
        if (c == 's') hasS = true;
    }

    // Output result
    if (hasP && hasS) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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

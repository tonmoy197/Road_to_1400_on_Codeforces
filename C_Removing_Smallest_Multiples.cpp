#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    int n;
    cin >> n;
    bool a[n + 1];
    string str;
    cin >> str;
    for (int i = 1; i <= n; i++) {
        a[i] = (str[i - 1] == '1');
    }
    long long ans = 0;
    int cost[n + 1];
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j += i) {
            if (a[j]) break;
            cost[j] = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!a[i]) ans += cost[i];
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
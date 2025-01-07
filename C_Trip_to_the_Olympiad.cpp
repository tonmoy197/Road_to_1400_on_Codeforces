#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int l, r;
    std::cin >> l >> r;
    // counts the leading zeros in the XOR of l and r
    // and then position (0 based ) of the first bit from the left that differs.
    int k = 31 - __builtin_clz(l ^ r);
    // l =10, r = 15, l ^ r: 0101
    // k = 31 - 29 = 2
    // (1 << k) - 1 = (1 << 2) - 1 = 3 (binary 0011)
    // l | 3 = 1010 | 0011 = 1011 (binary for 11)
    // a = 11
    int a = l | ((1 << k));
    int b = a + 1;
    int c = (a == l ? r : l);
    std::cout << a << " " << b << " " << c << "\n";
}
 
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t = 1;
    std::cin >> t;
 
    while (t--) {
        solve();
    }
}
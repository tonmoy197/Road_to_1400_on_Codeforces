#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
using i64 = long long;

void solve() {
    int n, d, k;
    std::cin >> n >> d >> k;
    
    std::vector<int> L(n + 1), R(n + 1);
    for (int i = 0; i < k; i++) {
        int l, r;
        std::cin >> l >> r;
        l--;
        L[l]++;
        R[r]++;
    }
    for (int i = 1; i <= n; i++) {
        R[i] += R[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        L[i] += L[i + 1];
    }
    
    int mx = -1;
    int imx = -1;
    int mn = n + 1;
    int imn = -1;
    
    for (int i = 0; i <= n - d; i++) {
        int v = R[i] + L[i + d];
        if (v > mx) {
            mx = v;
            imx = i + 1;
        }
        if (v < mn) {
            mn = v;
            imn = i + 1;
        }
    }
    
    std::cout << imn << " " << imx << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
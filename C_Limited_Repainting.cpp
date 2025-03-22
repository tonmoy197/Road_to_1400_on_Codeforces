#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool is_possible(const string& s, const vector<ll>& a, int n, int k, ll p) {
    vector<pair<int, int>> blocks;
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R' && a[i] > p) {
            if (start < i) {
                blocks.push_back({start, i - 1});
            }
            start = i + 1;
        }
    }
    if (start < n) {
        blocks.push_back({start, n - 1});
    }
    int operations = 0;
    for (const auto& block : blocks) {
        int left = block.first;
        int right = block.second;
        bool needed = false;
        for (int i = left; i <= right; i++) {
            if (s[i] == 'B' && a[i] > p) {
                needed = true;
                break;
            }
        }
        if (needed) {
            operations++;
        }
    
    }
    return operations <= k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll left = -1, right = 1e9 + 1;
        while (right - left > 1) {
            ll mid = (left + right) / 2;
            if (is_possible(s, a, n, k, mid)) {
                right = mid;
            } else {
                left = mid;
            }
        }
        cout << right << endl;
    }
    return 0;
}
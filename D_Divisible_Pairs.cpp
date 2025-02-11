#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Custom hash function for pair<int, int>
struct pair_hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, x, y; cin >> n >> x >> y;
        map <int, vector<int>> mp;
        while (n--){
        int z; cin >> z;
        mp[z % y].push_back(z);
    }
    
    int ans = 0;
    
    for (auto [u, v] : mp){
        map <int, int> m;
        for (auto z : v){
            z %= x;
            ans += m[(x - z) % x];
            m[z]++;
        }
    }
    
    cout << ans << "\n";
    }
    return 0;
}

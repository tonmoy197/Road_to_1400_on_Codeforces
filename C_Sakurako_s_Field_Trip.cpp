#include <iostream>
#include <vector>
#include <map>
#include <algorithm> // If you need algorithms
#include <utility>   // If you need pairs
#include <bits/stdc++.h>

using namespace std;
#define int long long
#define INF (int)1e18

void Solve() 
{
    int n; cin >> n;
    
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    
    vector<vector<int>> b(n);
    for (int i = 0; i < n; i++){
        int x = min(i, n - 1 - i);
        b[x].push_back(a[i]);
    }
    
    int ans = 0;
    
    if (n % 2 == 1){
        int v = n / 2;
        b[v].push_back(a[v]);
    } else {
        int v = (n - 1) / 2;
        // cout << v << " " << b[v][0] << " " << b[v][1] << " ";
        if (b[v][0] == b[v][1]) ans++;
    }
    
    // cout << ans << " ";
    
    for (int i = 1; i <= ((n - 1) / 2); i++){
        int mx = INF;
        for (int j = 0; j < 2; j++){
            reverse(b[i].begin(), b[i].end());
            
            int v = 0;
            v += b[i][0] == b[i - 1][0];
            v += b[i][1] == b[i - 1][1];
            
            mx = min(mx, v);
        }
        
        ans += mx;
    }
    
    cout << ans << "\n";
}

int32_t main() 
{
    
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    
    return 0;
}
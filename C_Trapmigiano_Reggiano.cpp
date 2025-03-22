#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> getPostorder(int n, int en, const vector<vector<int>>& adj) {
    vector<int> perm;
    vector<bool> visited(n + 1, false);
    stack<pair<int, int>> stk;  // (vertex, parent)
    stk.push({en, -1});
    
    while (!stk.empty()) {
        int u = stk.top().first;
        int parent = stk.top().second;
        if (!visited[u]) {
            visited[u] = true;
            // Push unvisited children
            for (int v : adj[u]) {
                if (v != parent && !visited[v]) {
                    stk.push({v, u});
                }
            }
        } else {
            // All children processed
            perm.push_back(u);
            stk.pop();
        }
    }
    return perm;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, st, en;
        cin >> n >> st >> en;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> p = getPostorder(n, en, adj);
        for (int i = 0; i < n; i++) {
            cout << p[i] << (i < n - 1 ? " " : "\n");
        }
    }
    return 0;
}
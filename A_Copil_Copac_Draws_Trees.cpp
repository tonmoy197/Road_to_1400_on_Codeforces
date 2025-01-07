#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 200005;
int dp[MAX_NODES], lastEdgeIndex[MAX_NODES];
vector<pair<int, int>> graph[MAX_NODES];

void dfs(int node) {
    for (auto neighbor : graph[node]) {
        int neighborNode = neighbor.first;
        int edgeIndex = neighbor.second;

        // If the neighbor has not been visited yet
        if (dp[neighborNode] == 0) {
            // Calculate the number of scans needed for the neighbor
            dp[neighborNode] = dp[node] + (edgeIndex < lastEdgeIndex[node]);
            lastEdgeIndex[neighborNode] = edgeIndex;
            dfs(neighborNode);
        }
    }
}

void solveTestCase() {
    int n;
    cin >> n;

    // Reset arrays and adjacency list for the test case
    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
        lastEdgeIndex[i] = 0;
        graph[i].clear();
    }

    // Input edges and build the graph
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].emplace_back(v, i);
        graph[v].emplace_back(u, i);
    }

    // Start DFS from node 1
    dp[1] = 1; // Node 1 starts with 1 scan
    dfs(1);

    // Find the maximum scans needed
    int maxScans = 0;
    for (int i = 1; i <= n; i++) {
        maxScans = max(maxScans, dp[i]);
    }

    cout << maxScans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }

    return 0;
}

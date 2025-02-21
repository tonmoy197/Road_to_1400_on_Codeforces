#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int maxColor = n*m;
        vector<bool> used(maxColor+1, false);
        vector<bool> adj(maxColor+1, false);

        // Read the grid
        vector<vector<int>> grid(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> grid[i][j];
                used[ grid[i][j] ] = true;
            }
        }

        // Determine adjacency (check right and down neighbors)
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int c = grid[i][j];
                if(j + 1 < m && grid[i][j+1] == c){
                    adj[c] = true;
                }
                if(i + 1 < n && grid[i+1][j] == c){
                    adj[c] = true;
                }
            }
        }

        // Compute sum of costs and track maximum cost
        int sumCost = 0, maxCost = 0;
        for(int color = 1; color <= maxColor; color++){
            if(used[color]){
                int cost = (adj[color] ? 2 : 1);
                sumCost += cost;
                maxCost = max(maxCost, cost);
            }
        }

        cout << sumCost - maxCost << "\n";
    }

    return 0;
}

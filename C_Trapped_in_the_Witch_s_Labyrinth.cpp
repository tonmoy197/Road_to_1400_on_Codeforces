// https://codeforces.com/problemset/problem/2034/C
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        // ------------------------------------------------------------
        // Additional logic: Check for invalid input or edge cases.
        if(n <= 0 || m <= 0) {
            // If there are no valid cells, the answer is trivially 0.
            cout << 0 << "\n";
            continue;
        }
        // ------------------------------------------------------------

        // Read the grid with 1-based indexing (we prepend a dummy char '-')
        vector<string> grid(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> grid[i];
            grid[i] = "-" + grid[i];  // pad so that grid[i][1] is the first char
        }

        // reverseAdj[r][c] will hold all cells that can move into (r, c) 
        // in a "reversed" sense. 
        // If a cell has 'U', it normally goes up, so in reverse,
        // (r - 1, c) -> (r, c).
        // etc.
        vector<pair<int,int>> reverseAdj[n+2][m+2];

        // Build the reverse adjacency
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(grid[i][j] == 'U') {
                    reverseAdj[i - 1][j].push_back({i, j});
                }
                else if(grid[i][j] == 'R') {
                    reverseAdj[i][j + 1].push_back({i, j});
                }
                else if(grid[i][j] == 'D') {
                    reverseAdj[i + 1][j].push_back({i, j});
                }
                else if(grid[i][j] == 'L') {
                    reverseAdj[i][j - 1].push_back({i, j});
                }
                // if it's '?', we do nothing here 
            }
        }

        // We'll mark visited cells in "reversed" BFS. 
        // visited[r][c] = 1 means cell (r,c) is reachable from the boundary
        // if we reverse the direction of edges.
        int visited[n+2][m+2];
        memset(visited, 0, sizeof(visited));

        // Start a BFS from the boundary
        queue<pair<int,int>> q;

        // Top row
        for(int col = 0; col <= m + 1; col++) {
            visited[0][col] = 1;
            q.push({0, col});
        }
        // Left column
        for(int row = 1; row <= n + 1; row++) {
            visited[row][0] = 1;
            q.push({row, 0});
        }
        // Bottom row
        for(int col = 1; col <= m + 1; col++) {
            visited[n + 1][col] = 1;
            q.push({n + 1, col});
        }
        // Right column
        for(int row = 1; row <= n; row++) {
            visited[row][m + 1] = 1;
            q.push({row, m + 1});
        }

        // Perform the BFS
        while(!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            // Look at all cells that can come into (r,c) (the "reverse" adjacency).
            for(auto &inCell : reverseAdj[r][c]) {
                auto [rr, cc] = inCell;
                if(!visited[rr][cc]) {
                    visited[rr][cc] = 1;
                    q.push({rr, cc});
                }
            }
        }

        // Extra step for '?' cells:
        // If a cell is '?', and all four neighbors are visited, mark it visited.
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(grid[i][j] == '?') {
                    if( visited[i - 1][j] && visited[i][j + 1] 
                     && visited[i + 1][j] && visited[i][j - 1]) 
                    {
                        visited[i][j] = 1;
                    }
                }
            }
        }

        // Count how many cells remain unvisited
        int unreachable = n * m; 
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(visited[i][j]) {
                    unreachable--;
                }
            }
        }

        cout << unreachable << "\n";
    }
    return 0;
}

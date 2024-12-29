// https://codeforces.com/problemset/problem/1948/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// check if cell is valid 
bool isvalid(int x, int y, int n){
    return x >= 0 && x < 2 && y >= 0 && y < n;
}

// directions for free move 
int dx[] = {0, 0, -1, 1 };
int dy[] = {-1, 1, 0, 0};

bool dfs(int x, int y, int n, string &row1, string &row2, vector<vector<bool>> &visited){
    // if we reach (2,n) -> (1, n - 1)
    if(x == 1 && y == n - 1) return true;

    visited[x][y] = true;

    // free moves 
    for(int d = 0; d < 4; d ++){
        int nx = x + dx[d], ny = y + dy[d];
        if(isvalid(nx, ny, n) && !visited[nx][ny]){
            // arrow move
            char arrow = (nx == 0 ? row1[ny] : row2[ny]);
            int nnx = nx, nny = ny;
            if(arrow == '<' ) nny --;
            else if(arrow == '>') nny ++;

            if(isvalid(nnx, nny, n) && !visited[nnx][nny]){
                if(dfs(nnx, nny, n, row1, row2, visited)){
                    return true;
                }
            }

        }
    }

    return false;
}

int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    string row1, row2; cin >> row1 >> row2; 

    vector<vector<bool>> visited(2, vector<bool> (n, false));

    cout << (dfs(0, 0, n, row1, row2, visited) ? "YES" : "NO") << '\n';
    
}
return 0;
}
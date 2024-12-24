// Q: Problem Statement: Given a grid of size N×N ( 1≤N≤20 ), 
// where each cell contains a bitmask representing obstacles in
//  four directions (Up, Down, Left, Right). Determine the number 
//  of distinct paths from the top-left corner to the bottom-right 
//  corner moving only in allowed directions as per the bitmask.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Struct to represent a direction with its movement vector and corresponding bitmask
struct Direction
{
    int dx, dy, bit; 
} directions[4] = {
    {-1, 0, 1}, // Up : bit 0
    {1, 0, 2 }, // Down : bit 1
    {0 , -1 , 4}, // Left : bit 2
    {0, 1, 8 } // Right : bit 3
};

// Predefined array to map each direction to opposite direction 
// index : Currect Direction, Value : Opposite Direction index
const int opposite_dir[4] = {1, 0, 3, 2};

// Necessary Variable 
int N;
ll grid[20][20];
ll total_paths = 0;

// Function to check if the cell (x,y) is within the grid boundaries 
bool isValid(int x, int y){
    return (x >= 0 && x < N && y >= 0 && y < N);
}

// DFS function to explore all valid paths
void dfs(int x, int y, vector<vector<bool>> &visited){
    // If destination is reached, increment the path count
    if( x == N - 1 && y == N - 1) {
        total_paths ++;
        return;
    }

    // Iterate through all four possible directions 
    for ( int i = 0; i < 4; i ++){
        int nx = x + directions[i].dx;
        int ny = y + directions[i].dy;
        int current_bit = directions[i].bit;
        int oppo_dir = opposite_dir[i];

        // Check if movement in this direction is blocked by an obstable in the current cell 
        if((grid[x][y] & current_bit) != 0) continue; //obstacle present can't move

        // Check if the target cell is within grid boundaries 
        if(!isValid(nx, ny)) continue;

        // Check if target cell allow entry from the opposite direction 
        if( (grid[nx][ny] & directions[oppo_dir].bit) != 0 ) continue;

        // Mark if the target cell has already been visited to prevent cycles 
        if(visited[nx][ny]) continue;

        // Mark the target cell as visited and proceed with DFS
        visited[nx][ny] = true;
        dfs(nx, ny, visited);
        visited[nx][ny]; // backtracking 

    }   
}
 
int main()
{
    cin >> N;

    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j ++){
            cin >> grid[i][j];
            // ensure bit mask is within the range 0-15
            grid[i][j] &= 15; 
        }
    }

    // Initialize visited grid 
    vector<vector<bool>> visited(N, vector<bool> (N, false));
    visited[0][0] = true;

    // initialize dfs
    dfs(0, 0, visited);

    // Output The total number of valid paths 
    cout << total_paths << endl;

return 0;
}
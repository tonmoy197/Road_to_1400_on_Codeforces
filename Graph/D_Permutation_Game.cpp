
// https://codeforces.com/problemset/problem/1968/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to calculate the maximum score for a player
// Parameters:
// - p: Permutation array indicating the next position
// - a: Array of values associated with each position
// - start: Starting position for the player (0-based index)
// - moves: Number of moves the player can make
// Returns:
// - Maximum score the player can achieve
ll calculate_score(const vector<int> &p, const vector<int> &a, int start, int moves) {
    int n = p.size();
    ll max_score = 0, current_sum = 0;
    vector<bool> visited(n, false);

    // Traverse the cycle starting from the given position
    while (!visited[start] && moves > 0) {
        // Mark the current position as visited
        visited[start] = true;

        // Update the maximum score considering the current position
        max_score = max(max_score, current_sum + 1LL * moves * a[start]);

        // Add the current position's value to the cumulative sum
        current_sum += a[start];

        // Decrement the remaining moves
        moves--;

        // Move to the next position in the permutation
        start = p[start];
    }

    return max_score;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps; // Read inputs: size, moves, and starting positions for both players

        vector<int> p(n), a(n);
        for (int &e : p) {
            cin >> e;
            e--; // Convert to 0-based index to simplify calculations
        }

        for (int &e : a) {
            cin >> e; // Read the values associated with each position
        }

        // Calculate scores for both players
        // pb-1 and ps-1 are used to convert 1-based indices to 0-based indices
        ll bodya_score = calculate_score(p, a, pb - 1, k);
        ll sasha_score = calculate_score(p, a, ps - 1, k);

        // Output the result based on the scores
        // Compare the scores to determine the winner
        if (bodya_score > sasha_score) {
            cout << "Bodya\n"; // Player 1 wins
        } else if (bodya_score < sasha_score) {
            cout << "Sasha\n"; // Player 2 wins
        } else {
            cout << "Draw\n"; // It's a tie
        }
    }

    return 0;
}

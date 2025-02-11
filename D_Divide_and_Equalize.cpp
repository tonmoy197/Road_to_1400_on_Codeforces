#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

const int MAX_N = 1E6;
vector<int> minp(MAX_N + 1, 0), primes;
vector<int> cnt(MAX_N + 1, 0);

// Function to perform Sieve of Eratosthenes
void sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (minp[i] == 0) { // i is prime
            minp[i] = i;
            primes.push_back(i);
        }
        
        for (int p : primes) {
            if (i * p > n) break;
            minp[i * p] = p;
            if (p == minp[i]) break;
        }
    }
}

// Function to check if the conditions are met for the test case
void solve() {
    int n;
    cin >> n;
    
    // Clear the count array for each test case
    fill(cnt.begin(), cnt.end(), 0);
    
    vector<int> stk;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        // Prime factorization of x
        while (x > 1) {
            int p = minp[x];
            x /= p;
            stk.push_back(p);
            cnt[p]++;
        }
    }
    
    // Check if all prime factors appear a multiple of n times
    bool is_valid = true;
    for (int p : stk) {
        if (cnt[p] % n != 0) {
            is_valid = false;
            break;
        }
        cnt[p] = 0; // Reset the count after checking
    }
    
    // Output the result
    cout << (is_valid ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Precompute smallest prime factors for all numbers up to MAX_N
    sieve(MAX_N);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

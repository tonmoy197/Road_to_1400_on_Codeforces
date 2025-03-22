#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        
        // Count the number of '-' and '_'
        long long countDash = 0, countUnderscore = 0;
        for (char c : s) {
            if (c == '-') {
                ++countDash;
            } else {
                ++countUnderscore;
            }
        }
        
        // If we don't have at least 2 dashes and 1 underscore, answer is 0
        if (countDash < 2 || countUnderscore < 1) {
            cout << 0 << "\n";
            continue;
        }
        
        // We want to maximize: countUnderscore * (floor(countDash/2)) * (ceil(countDash/2))
        // A neat way to compute floor/ceil with integer division:
        // floor(x/2) = x/2
        // ceil(x/2) = x - floor(x/2)
        
        long long left = countDash / 2;       // floor(x/2)
        long long right = countDash - left;   // ceil(x/2)
        
        long long answer = countUnderscore * left * right;
        cout << answer << "\n";
    }
    
    return 0;
}

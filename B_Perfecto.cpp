#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute perfect squares up to 1.6e11
    ll sum = 0;
    unordered_set<long long> perfect_squares;
    for (long long i = 1; i <= 400000; i++) {
        sum += i;
        ll root = sqrtl(sum);
        if(root * root == sum) perfect_squares.insert(sum);
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long s = (long long) n * (n + 1) / 2;

        if (perfect_squares.count(s)) {
            cout << "-1\n";
        } else {
            vector<int> p(n);
            vector<bool> used(n + 1, false);
            long long current_sum = 0;

            for (int pos = 0; pos < n; pos++) {
                for (int i = 1; i <= n; i++) {
                    if (!used[i] && !perfect_squares.count(current_sum + i)) {
                        p[pos] = i;
                        used[i] = true;
                        current_sum += i;
                        break;
                    }
                }
            }

            // Output permutation
            for (int i = 0; i < n; i++) {
                cout << p[i] << (i < n - 1 ? " " : "\n");
            }
        }
    }
    return 0;
}
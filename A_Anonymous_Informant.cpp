// https://codeforces.com/problemset/problem/1893/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        k = min(n, k);
        int last = n - 1;
        bool valid = true; // To track validity of the test case

        for (int i = 0; i < k; i++) {
            if (a[last] > n) {
                valid = false;
                break; // Stop further processing
            }
            last += (n - a[last]);
            if (last >= n) last -= n;
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        ll x, y, k;
        cin >> x >> y >> k;
        while (k > 0 && x != 1) {
            // Not divisible case
            ll rm = x % y; // Use x % y instead of x % (y - 1)
            if (rm < y - 1) {
                ll take = min(k, y - 1 - rm);
                k -= take;
                x += take;
                continue;
            }

            // Division Case
            x += 1;
            while (x % y == 0) {
                x /= y;
            }
            k--;
        }

        if (k > 0) {
            assert(x == 1);
            x = k % (y - 1) + 1;
        }

        cout << x << endl;
    }
    return 0;
}

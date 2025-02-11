#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> fwd(n, 0), back(n, 0), closest(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Precompute closest city for each city
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                closest[i] = 1;
            } else if (i == n - 1) {
                closest[i] = n - 2;
            } else {
                closest[i] = (a[i + 1] - a[i] < a[i] - a[i - 1]) ? i + 1 : i - 1;
            }
        }

        // Precompute forward and backward costs
        for (int i = 1; i < n; i++) {
            fwd[i] = fwd[i - 1] + (closest[i - 1] == i ? 1 : a[i] - a[i - 1]);
        }
        for (int i = n - 2; i >= 0; i--) {
            back[i] = back[i + 1] + (closest[i + 1] == i ? 1 : a[i + 1] - a[i]);
        }

        int m;
        cin >> m;

        while (m--) {
            int x, y;
            cin >> x >> y;
            x--, y--; // Convert to zero-based indexing

            if (x < y) {
                cout << fwd[y] - fwd[x] << "\n";
            } else {
                cout << back[y] - back[x] << "\n";
            }
        }
    }

    return 0;
}

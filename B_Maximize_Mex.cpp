#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        int k = 0;
        while (true) {
            // If current number k is not found, that's the MEX
            if (mp[k] == 0) {
                cout << k << endl;
                break;
            }

            // If there are duplicates, increment the position k+x by the number of excess elements
            if (mp[k] > 1) {
                mp[k + x] += mp[k] - 1;
            }

            // Move to the next number
            k++;
        }
    }
    return 0;
}

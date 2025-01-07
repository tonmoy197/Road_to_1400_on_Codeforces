#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;

        vector<ll> points(n), queries(q);
        for (int i = 0; i < n; i++) cin >> points[i];
        for (int i = 0; i < q; i++) cin >> queries[i];

        // Map to store count of points covered by a specific number of segments
        map<ll, ll> segment_counts;

        // precompute the contribution of individual points
        for (int i = 0; i < n; i++) {
            segment_counts[1LL * (i + 1) * (n - i) - 1] ++;
        }

        // precompute the contribution of gaps between consecutive points
        for(int i = 1; i < n; i ++){
            segment_counts[1LL * i * (n - i)] += (points[i] - points[i-1] - 1);
        }

        // Output results for each query
        for (int i = 0; i < q; i++) {
            if (segment_counts.find(queries[i]) != segment_counts.end()) {
                cout << segment_counts[queries[i]] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

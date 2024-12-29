//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;  // Use long long for larger input size
    cin >> n;
    vector<int> a(n);

    for (ll i = 0; i < n; i++) 
        cin >> a[i];

    // Find the minimum and maximum values in one pass
    int start = INT_MAX, end = INT_MIN;
    for (ll i = 0; i < n; i++) {
        start = min(start, a[i]);
        end = max(end, a[i]);
    }

    ll startcnt = 0, endcnt = 0;

    // Count occurrences of the min and max values in one pass
    for (ll i = 0; i < n; i++) {
        if (a[i] == start) 
            startcnt++;
        if (a[i] == end) 
            endcnt++;
    }

    // Output the difference
    cout << end - start << " ";

    // Handle the case where all elements are the same
    if (start == end) 
        cout << n * (n - 1) / 2 << endl;
    else 
        cout << startcnt * endcnt << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int MAXM = 300300;

int m, arr[MAXM];

int recursiveSolve(int l, int r) {
    if (r - l == 1) return 0;
    int mid = (l + r) / 2;
    int maxLeft = *max_element(arr + l, arr + mid);
    int maxRight = *max_element(arr + mid, arr + r);
    int swaps = 0;
    if (maxLeft > maxRight) {
        swaps++;
        for (int i = 0; i < mid - l; ++i) {
            swap(arr[l + i], arr[mid + i]);
        }
    }
    return swaps + recursiveSolve(l, mid) + recursiveSolve(mid, r);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> m;
        for (int i = 0; i < m; ++i) cin >> arr[i];
        int swaps = recursiveSolve(0, m);
        cout << (is_sorted(arr, arr + m) ? swaps : -1) << endl;

    }
    return 0;
}

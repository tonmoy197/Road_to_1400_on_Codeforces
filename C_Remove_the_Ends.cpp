#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
using ll = long long;
 
 
ll solveRec(int L, int R, const vector<ll>& a) {
    if (L > R) return 0;
    // If the subarray begins with a positive, the move is forced.
    if (a[L] > 0)
        return a[L] + solveRec(L + 1, R, a);
    // If the subarray ends with a negative, the move is forced.
    if (a[R] < 0)
        return -a[R] + solveRec(L, R - 1, a);
    // Otherwise, we are in an ambiguous situation:
    // (the leftmost element is non–positive and the rightmost is non–negative)
    // Option 1: skip the initial block of non–positives.
    int L1 = L;
    while (L1 <= R && a[L1] <= 0)
        L1++;
    ll option1 = solveRec(L1, R, a);
 
    // Option 2: skip the trailing block of non–negatives.
    int R1 = R;
    while (R1 >= L && a[R1] >= 0)
        R1--;
    ll option2 = solveRec(L, R1, a);
 
    return max(option1, option2);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<ll> a(N);
        for (int i = 0; i < N; i++)
            cin >> a[i];
 
        cout << solveRec(0, N - 1, a) << "\n";
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    ll res = 0, sum = 0, mx = 0;
    for (int i = 0; i < min(n, k); i++) {
        sum += a[i];
        mx = max(mx, (ll)b[i]); // Cast to ll to prevent overflow in multiplication
        res = max(res, sum + mx * (k - i - 1));
    }
    cout << res << "\n";
}
return 0;
}
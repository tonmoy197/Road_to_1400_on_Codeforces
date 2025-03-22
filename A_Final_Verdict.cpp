#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        long long S = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i];
        }
        if (S == (long long)x * n) cout << "YES\n";
        else cout << "NO\n";
    }
return 0;
}
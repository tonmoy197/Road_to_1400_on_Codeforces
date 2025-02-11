#include <climits>
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
    int n, m; cin >> n >> m;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    for(int i = 0; i < n; i ++) cin >> b[i];

    // Minimize b[i] for intermediate payments
    for (int i = 0; i < n; i++) b[i] = min(b[i], a[i]);

    int acc = 0, ans = INT_MAX;
    for(int i = n - 1; i >=0 ; i --){
        if(i < m){
            ans = min(acc + a[i], ans);
        }
        acc += b[i];
    }
    cout << ans << endl;
}
return 0;
}
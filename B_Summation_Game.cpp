#include <algorithm>
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
    // will remove if answer becomes negative 
    // if answer becomes positive will not remove
    int n, k, x; cin >> n >> k >> x;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.rbegin(), a.rend());

    vector<ll> prefix(n+1, 0);
    for(int i = 1; i <= n; i ++){
        prefix[i] = prefix[i-1] + a[i-1];
    }

    // for(auto x : prefix) cout << x << " ";
    // cout << endl;

    ll mx = - 1e9;
    if(n == 1){
        cout << 0 << endl;
        continue;
    }
    for(int len = 0; len <= k; len ++){
        ll beforeRemove = prefix[n] - prefix[len];
        ll afterRemove = prefix[n] - prefix[min(len+x, n)];
        ll removedVal =  beforeRemove -  afterRemove;
        // cout << beforeRemove << " " << afterRemove << " " << removedVal << endl;
        mx = max( afterRemove - removedVal, mx);
    }
    cout << mx << endl;
}
return 0;
}
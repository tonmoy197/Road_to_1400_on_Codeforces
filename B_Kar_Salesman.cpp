
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, x; cin >> n >> x;
    vector<int> a(n);

    ll sum = 0, mx = 0;
    for(auto &x : a){
        cin  >> x;
        sum += x;
        mx = max(1LL*x, mx);
    } 

    // Number of customer
    ll ans = ceil((double)sum / x);

    // cout << sum <<" " << x << " " << ans <<" " << mx << endl;

    cout << max(ans, mx) << endl;
    
}
return 0;
}
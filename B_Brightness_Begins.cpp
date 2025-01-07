#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{

int tt; cin >> tt;
while( tt -- ){
    ll k; cin >> k;
    // cout << k + int(sqrtl(k) + 0.5) << endl;
    ll l = 1, r = 2e18;

    while(r - l > 1){
        ll mid = (l + r)/2;
        ll n = mid - int(sqrtl(mid));

        if(n >= k) r = mid ;
        else l = mid;
    }

    cout << r << endl;
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll x; ll m; cin >> x >> m;
    int ans = 0;

    for(int y = 1; y <= min(m, 2*x); y ++){
        if(x != y && (x % (x^y)== 0 || y % (x ^ y) == 0)){
            ans ++;
        }
    }

    cout << ans << endl;
}
return 0;
}
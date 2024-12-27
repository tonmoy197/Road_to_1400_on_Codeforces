#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll k , l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;

    int n = 0;
    ll kn = 1;
    int ans = 0;

    while(l1 <= r2/kn){
        // Ceiling tricks : Ceil(l2 / kn) = (l2 + kn - 1) / kn, if l2, kn > 0.
        ll lower = max(l1,(l2 + kn - 1) / kn);
        ll higher = min(r1,  r2/kn);

        if(higher >= lower)
            ans += (higher - lower + 1);

        kn *= k;


    }

    cout << ans << endl;

}
return 0;
}
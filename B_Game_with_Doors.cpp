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
    int l, r, L, R; cin >> l >> r >> L >> R;
    int ans = min(r, R) - max(l, L) ;

    if(ans <= 0) ans = 1;
    else{
        ans += (l != L);
        ans += (r != R);

    }
    cout << ans << endl;

}
return 0;
}
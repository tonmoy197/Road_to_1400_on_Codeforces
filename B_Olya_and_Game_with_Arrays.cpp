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
    int n; cin >> n; 
    ll mna1 = 1e9, mna2 = 1e9, ans = 0;
    while(n -- ){
        int m; cin >> m;
        ll mn1 = 1e9, mn2 = 1e9;
        for(int i = 0; i < m; i ++){
            ll x; cin >> x;
            if(mn2 > x ){
                mn2 = x;
                if(mn1 > x){
                    mn2 = mn1; 
                    mn1 = x;
                }
            }
        }
        // cout << mn1 <<" " << mn2 << endl;
        ans += mn2;
        mna1 = min(mna1, mn1);
        mna2 = min(mna2, mn2);
    }
    cout << ans - mna2 + mna1 << endl;
}

return 0;
}
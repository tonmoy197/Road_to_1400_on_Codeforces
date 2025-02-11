#include <bits/stdc++.h>
#include <ios>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, l, r; cin >> n >> l >> r;
    vector<ll> a(n), left, right, mid; 
    l--;
    r --;
    ll ans = 0;
    for(int i = 0; i < n; i ++ ) {
        cin >> a[i];
        if(i < l) left.push_back(a[i]);
        if(i >= l && i <= r){
            mid.push_back(a[i]);
            ans += a[i];
        } 
        if(i > r) right.push_back(a[i]);
    }

    sort(left.begin(), left.end());
    sort(mid.rbegin(), mid.rend());
    sort(right.begin(), right.end());

    // cout << "Left : " ;
    // for(auto u : left) cout << u << " " ;
    // cout << endl;  
    // cout << "Mid: " ;
    // for(auto u : mid) cout << u << " " ;
    // cout << endl;
    // cout << "Right : " ;
    // for(auto u : right) cout << u << " ";
    // cout << endl << endl;

    ll ansLeft = ans ;
    for(int i = 0; i < min(left.size(), mid.size()); i ++){
        if(left[i] < mid[i]) ansLeft = ansLeft + left[i] - mid[i];
    }
    ll ansRight = ans ;
    for(int i = 0; i < min(right.size(), mid.size()); i ++){
        if(right[i] < mid[i]) ansRight = ansRight + right[i] - mid[i];
    }

    cout << min(ans, min(ansLeft, ansRight)) << endl;



}
return 0;
}
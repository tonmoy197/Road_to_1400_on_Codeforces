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
    vector<int> a(n);
    int mn = 1e9;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        mn = min(mn, a[i]);
    } 

    ll ans = 0;
    for(int i = 0; i < n; i ++) ans += (a[i] - mn);
    cout << ans << endl;

    
}
return 0;
}
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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int cnt = 0;
    int st = a[0], pos = 0;
    bool ok = false;
    for(int i = 0; i < n; i ++){
        if(st == a[i] ) cnt ++;
        if(cnt == k){
            ok = true;
            pos = i;
            break;
        }
    }
    // cout << pos << endl;

    // if(pos < n) {
    //     cout << pos << endl;
    //     map<int, int> f;
    //     for(int i = pos + 1; i < n; i ++){
    //         f[a[i]] ++;
    //     }

    //     bool ok2 = false;
    //     for(auto [x, y] : f) {
    //         if(y >= k){
    //             ok2 = true;
    //             break;
    //         }
    //     }
    //     if(ok2 && ok) cout << "YES" << endl;
    //     else cout << "NO" << endl;

    // }
    // else cout << "NO" << endl;

    int cnten = 0;
    int en = a[n-1];
    bool ok2 = false;
    for(int i = pos + 1; i < n; i ++){
        if(en == a[i] ) cnten ++;
        if(cnten == k){
            ok2 = true;
            break;
        }

    }
    // cout << cnt << " " << cnten << endl;
    if((ok2 && ok) || (ok && (a[n-1] == st))) cout << "YES" << endl;
    else cout << "NO" << endl;


}
return 0;
}
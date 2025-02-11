#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    vector<int> a(n), b(n);

    for(auto &x : a) cin >> x; 
    for(auto &x : b) cin >> x; 

    // checking two are smaller or equal 
    int smallcnt = 0, equalcnt = 0;
    for(int i = 0; i < n; i ++){
        if(a[i] == b[i]) equalcnt ++;
        if(a[i] < b[i]) smallcnt ++;
    }

    // cout << smallcnt << " " << equalcnt ;

    if((smallcnt >= 2) || (smallcnt >= 1 && equalcnt >= 1)) {
        cout << "NO" << endl;
        continue;
    }

    // count min difference between them 
    int minhigh = 1e9, maxlow = 0;
    for(int i = 0; i < n; i ++){
        if(a[i] >= b[i] ) minhigh = min(minhigh, a[i] - b[i]);
        if(a[i] < b[i]) maxlow = max(maxlow, b[i] - a[i]);
    }

    // cout << minhigh << " " << maxlow << endl;

    if(minhigh >= maxlow) cout << "YES" << endl;
    else cout << "NO" << endl;




}
return 0;
}
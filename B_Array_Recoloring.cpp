#include <algorithm>
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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b = a;

    sort(a.begin(), a.end(), greater<ll>());

    ll sum_k = 0;
    for (int i = 0; i < k; i++) {
        sum_k += a[i];
    }

    ll total = sum_k + a[k];

    if(k == 1){
        ll pos = 0, val = b[0];
        for(int i = 1; i < n; i ++){
            if(b[i] >= val) {
                pos = i;
                val = b[i];
            }
        }
        // cout << pos << " " << val << endl;
        
        if((pos != 0) && (pos != n-1) ) total = val + max(b[0], b[n-1]);
    

    }
    cout << total << endl;



}
return 0;
}
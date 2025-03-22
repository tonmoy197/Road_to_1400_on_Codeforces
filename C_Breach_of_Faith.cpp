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
    ll n; cin >> n; 
    vector<ll> a(2*n);
    for(auto &x : a) cin >> x;

    sort(a.rbegin(), a.rend());

    // int val = 0;
    // for(int i = 0; i < 2*n - 1; i += 2){
    //     cout << (a[i] - a[i + 1]) << " ";
    //     val += (a[i] - a[i + 1]);
    // }
    // cout << val << endl;

    ll odd = 0, even = 0;

    for(int i = 0; i < 2*n ;i ++){
        if((i + 1) % 2 == 0) even += a[i];
        else odd += a[i];
    }

    cout << even << " " << odd << endl;

}
return 0;
}
// https://codeforces.com/problemset/problem/1420/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// Logic : Same Highest Set Bit : ai&aj >= ai^aj
// 1. Determine the Highest Set Bit for Each Number
// 2. Count the Number of Elements per Highest Set Bit
// 3. alculate the Number of Valid Pairs:
// For each bit position with count kl , add (kl*(kl-1))/2  to the total.
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    vector<int> a(n);
    for( int i = 0; i < n; i ++) cin >> a[i];

    // 2^30 ~ 1e9
    int MAX_BIT = 30 ;
    vector<int> bit_counts(31, 0);

    // counting the MSB for each value 
    for(auto x : a) {
        // handling edge case
        if(x == 0) continue;
        // find the ind of maximum bit position
        int heighest_bit_pos = 31 - __builtin_clz(x);
        bit_counts[heighest_bit_pos] ++ ;
    }

    ll ans = 0; 
    for(int l = 0; l <= MAX_BIT; l ++){
        if(bit_counts[l] >= 2) {
            ll kl = bit_counts[l];
            ans += (kl * (kl -1)) / 2;
        }
    }

    cout << ans << "\n";




}
return 0;
}
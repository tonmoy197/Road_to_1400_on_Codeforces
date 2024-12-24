// https://codeforces.com/problemset/problem/1514/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
// Logic :
// Condition for Bitwise AND to be Zero:
// For each bit position, at least one element must have that bit set to 0 
// For maximum sum there must single bit turned off (0)
// The number of ways to achieve this is n^k, where:
// n = Number of elements in the array.
// k = Number of bits.

int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll n , k ; cin >> n >> k;
    
    ll ans = 1;
    for(int i = 0; i < k; i ++){
        ans = (ans * n) % mod;
    }
    cout << ans << endl;
}
return 0;
}
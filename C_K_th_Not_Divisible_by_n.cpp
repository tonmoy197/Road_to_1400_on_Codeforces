// https://codeforces.com/problemset/problem/1352/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, k; cin >> n >> k;

    if(k == 1) {
        cout << 1 << endl;
        continue;
    }
    if(n > k ) {
        cout << k << endl;
        continue;
    }
    // // Calculate the number of complete blocks of (n-1) non-divisible numbers
    int  blocks = k / (n - 1);
    int remaining = k % (n - 1); 
    int ans = 1;
    
    if(remaining == 0) ans = blocks * n - 1;
    else ans = blocks * n + remaining;

    cout << ans << endl;
    

}
return 0;
}
#include <bits/stdc++.h>
using namespace std;

static const int MOD = 998244353;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        long long p0 = 1;   // The "empty" start
        long long dp1 = 0;  // Count of subsequences with exactly one '1'
        long long dp2 = 0;  // Count of subsequences with "1 ... 2^+"
        long long dp3 = 0;  // Count of completed "1 ... 2^+ ... 3"

        for(int i=0; i<n; i++){
            if(a[i] == 1){
                // dp1 += p0
                dp1 = (dp1 + p0) % MOD;
            }
            else if(a[i] == 2){
                // dp2 = dp2 * 2 + dp1
                dp2 = (dp2 * 2 + dp1) % MOD;
            }
            else if(a[i] == 3){
                // dp3 += dp2
                dp3 = (dp3 + dp2) % MOD;
            }
            // If a[i] is not 1,2,3 (problem states it's always 1..3), we do nothing else
        }
        
        // dp3 is the total count of "beautiful" subsequences
        cout << dp3 % MOD << "\n";
    }

    return 0;
}

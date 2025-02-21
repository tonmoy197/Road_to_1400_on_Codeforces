#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
 
int main()
{
    int tt; 
    cin >> tt;
    while(tt--){
        int n; 
        cin >> n; 
        vector<int> a(n);
        map<int, int> freq;
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        } 
 
        ll ans = 0;
        // Count pairs for exponents other than 1 and 2
        for(auto [x, y] : freq){
            if(x != 1 && x != 2){
                ans += (ll)y * (y - 1) / 2;
            }
        }
        
        int cnt1 = freq[1], cnt2 = freq[2];
        // Count pairs among ones, among twos, and cross pairs between ones and twos.
        ans += (ll)cnt1 * (cnt1 - 1) / 2;  // pairs among 1's
        ans += (ll)cnt2 * (cnt2 - 1) / 2;  // pairs among 2's
        ans += (ll)cnt1 * cnt2;            // cross pairs between 1 and 2
 
        cout << ans << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int ans = a[n-1];
    for(int i = n - 2; i >= 0; i --){
        ans = max(ans + 1, a[i]);
    }
    cout << ans << endl;
}
return 0;
}
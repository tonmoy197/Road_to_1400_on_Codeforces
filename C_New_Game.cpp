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

    sort(a.begin(), a.end());
    
    int ans = 0, j = 0;
    for(int i = 0; i < n; i ++){
        j = max(i, j);
        while(j + 1 < n && a[j + 1]-a[j] <= 1 && a[j+1]-a[i] < k){
            j ++;
        }
        ans = max(ans , j - i + 1);
    }

    cout << ans << endl;
}
return 0;
}
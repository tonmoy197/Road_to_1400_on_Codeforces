#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    for(int i = 0; i < n; i ++) cin >> b[i];

    int ans = a[n-1];
    for(int i = 0; i < n -1; i ++){
        if(a[i] > b[i + 1]) ans += a[i] - b[i + 1];
    }

    cout << ans << endl;

}
return 0;
}
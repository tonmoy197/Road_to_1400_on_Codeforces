#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    int ans = 1;
    int curr = 1;

    while(curr < n){
        curr = 2 * (curr + 1);
        ans ++;
    }

    cout << ans << endl;
}
return 0;
}
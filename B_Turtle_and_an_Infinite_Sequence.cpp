#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, m; cin >> n >> m;

    n += m;

    int pos = 0;
    for(int i = 30; i >= 0; i --){
        if(n & (1 << i)){
            pos = i; 
            break;
        }
    }

    // cout << pos + 1 << endl;
    int ans = 0; 
    for(int i = 0; i <= pos ; i ++){
        ans += (1 << i);
    }

    cout << ans << endl;

}
return 0;
}
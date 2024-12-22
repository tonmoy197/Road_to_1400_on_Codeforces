#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, a, b, c; cin >> n >> a >> b >> c;
    int x = (a + b + c);
    int ans = 3 * (n/x);
    n %= x;


    if(n > 0){
        ans ++;
        n -= a;

        if(n > 0){
            ans ++;
            n -= b;

            if(n > 0){
                ans ++;
            }
        }
    }
    cout << ans << endl;

}
return 0;
}
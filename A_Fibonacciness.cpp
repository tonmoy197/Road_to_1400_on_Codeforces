#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
    int a3 = a4 - a2;

    int tot = 0; 
    for(int i = -100; i <= 100; i ++){
        a3 = i;
        int ans = 0;
        if(a1 + a2 == a3) ans ++;
        if(a2 + a3 == a4 ) ans ++ ;
        if(a3 + a4 == a5 ) ans ++;

        tot = max(tot, ans);

    }
    cout << tot << endl;

}
return 0;
}

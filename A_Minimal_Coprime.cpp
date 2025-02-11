#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

int main()
{
int tt; cin >> tt;
while( tt -- ){
    int l, r; cin >> l >> r;
    if(l == 1 && r == 1) cout << 1 << endl;
    else{
        cout << r - l << endl;
    }
}
return 0;
}
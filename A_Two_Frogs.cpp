#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, a, b; cin >> n >> a >> b;
    if(abs(a - b) % 2 == 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
}
return 0;
}
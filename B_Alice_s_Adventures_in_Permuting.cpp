#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll n, b, c; cin >> n >> b >> c;
    if(b == 0){
        if(c >= n ) cout << n << endl;
        else if( c >= n - 2) cout << n - 1 << endl;
        else cout << - 1 << endl;;
        continue;
    }
    cout << n - max(0LL, (n + b - c -1)/b) << endl;

}
return 0;
}
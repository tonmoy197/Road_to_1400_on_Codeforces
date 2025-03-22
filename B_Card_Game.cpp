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
    int a1, a2, b1 , b2; cin >> a1 >> a2 >> b1 >> b2;
    ll ans = 0;
    // Scenario 1
    if ((a1 > b1 ? 1 : 0) + (a2 > b2 ? 1 : 0) > (a1 < b1 ? 1 : 0) + (a2 < b2 ? 1 : 0)) ans++;
    // Scenario 2
    if ((a1 > b2 ? 1 : 0) + (a2 > b1 ? 1 : 0) > (a1 < b2 ? 1 : 0) + (a2 < b1 ? 1 : 0)) ans++;
    // Scenario 3
    if ((a2 > b1 ? 1 : 0) + (a1 > b2 ? 1 : 0) > (a2 < b1 ? 1 : 0) + (a1 < b2 ? 1 : 0)) ans++;
    // Scenario 4
    if ((a2 > b2 ? 1 : 0) + (a1 > b1 ? 1 : 0) > (a2 < b2 ? 1 : 0) + (a1 < b1 ? 1 : 0)) ans++;

    cout << ans << endl;
}
return 0;
}
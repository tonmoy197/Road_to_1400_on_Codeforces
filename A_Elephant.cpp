#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{


ll x ; cin >> x;
ll ans = 0; 
for(int i = 5; i >= 2; i --){
    ans += x/i;
    x -= (x/i)*i;
}
ans += x;
cout << ans << endl;


return 0;
}
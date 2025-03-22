#include <cstdlib>
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
    int n, k, p; cin >> n >> k >> p;
    k = abs(k);
    if(k > n*p ){
        cout << - 1<< endl;
        continue;
    }
    
    int ans = k/p;
    ans += (ans*p != k);
    cout << ans << endl;
}
return 0;
}
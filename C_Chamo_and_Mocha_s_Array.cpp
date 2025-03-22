#include <iostream>
#include <locale>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int ans = 0;
    for(int i = 0; i < n - 1; i ++){
        ans = max(ans, a[i]);
    }

    cout << ans << endl;
}
return 0;
}
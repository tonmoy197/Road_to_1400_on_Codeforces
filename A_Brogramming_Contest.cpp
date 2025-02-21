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
    int n; cin >> n; 
    string s; cin >> s;
    int cnt10 = 0, cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i ++){
        if(s[i] == '0') cnt0 ++;
        if(s[i] == '1' ) cnt1 ++;
        if(i < n -1 && s.substr(i, 2) == "10") cnt10++;
    }

    if(cnt0 == n) cout << 0 <<endl;
    else if(cnt1 == n) cout << 1 << endl;
    else{
        int ans = cnt10 * 2;
        if(s[n-1] == '1') ans ++;
        cout << ans << endl;
    }
}
return 0;
}
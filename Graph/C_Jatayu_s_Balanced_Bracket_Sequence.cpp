//https://codeforces.com/problemset/problem/1726/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    string s; cin >> s;
    int ans = 1; 
    for(int i = 1; i < 2*n; i ++){
        if(s[i] == '(' && s[i - 1] == '(') ans ++;
    }
    cout << ans << endl;
}
return 0;
}
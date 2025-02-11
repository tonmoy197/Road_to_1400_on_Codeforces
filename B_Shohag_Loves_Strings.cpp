#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string s; cin >> s;
    int n = s.size();
    string ans;

    for(int i = 0; i < n-2; i ++){
        if(s[i] != s[i + 1] ){
            ans = s.substr(i, 2);
            break ;
        }
    }    
    
    for(int i = 0; i < n-3; i ++){
        if(s[i] != s[i + 2] ){
            ans = s.substr(i, 3);
            break ;
        }
    }

    if(ans.size() < 2) cout << - 1 << endl;
    else cout << ans << endl;
}
return 0;
}
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
    int ans = 0;
    string s; cin >> s;
    string str = "1100";
    int n = s.size();
    for(int i = 0; i < s.size()-3; i ++){
        string x = s.substr(i, 4);
        if(str == x) ans ++;
    }
    // cout << cnt << endl;

    int q; cin >> q;

    for (int i = 0; i < q; i++) {
        int p;
        char v;
        std::cin >> p >> v;
        p--;
        
        for (int j = std::max(0, p - 3); j <= std::min(p, n - 4); j++) {
            ans -= s.substr(j, 4) == "1100";
        }
        s[p] = v;
        for (int j = std::max(0, p - 3); j <= std::min(p, n - 4); j++) {
            ans += s.substr(j, 4) == "1100";
        }
        std::cout << (ans ? "YES" : "NO") << "\n";
    }
}
return 0;
}
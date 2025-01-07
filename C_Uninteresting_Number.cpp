#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string s; cin >> s; 
    map<int, int> mp;
    ll sum = 0;
    for(int i = 0; i < s.size(); i ++){
        int x = ( s[i] - '0');
        sum += x;
        if(x >= 2 && x <= 3) mp[x * x - x] ++ ;
    }

    if(sum % 9 == 0) cout << "YES" << endl;
    else{
        // for(auto x : mp) cout << x.first <<" " << x.second <<" ";
        // cout << sum % 9 << " "<< endl;
        int remain = sum % 9;
        bool check = false;
        
        for(int x = 0 ; x <= min(10, mp[2]); x ++){
            for(int y = 0; y <= min(10, mp[6]); y ++){
                if((2*x + 6*y + sum) % 9 == 0) {
                        check = true;
                        break;
                }
            }
            if(check) break;
        }

        cout << (check? "YES" : "NO" ) << endl;

    }


}
return 0;
}
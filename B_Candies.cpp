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
    vector<int> ans;
    
    if(n % 2 == 0) cout << - 1 << endl;
    else {
        int f = 0;
        for(int i = 29; i >= 1; i --){
            if((n >> i) & 1){
                ans.push_back(2);
                f = 1;
            }
            else if(f) ans.push_back(1);

        }

        cout << ans.size() << endl;
        for(auto x : ans ) cout << x << " ";
        cout << endl;
    }
}
return 0;
}
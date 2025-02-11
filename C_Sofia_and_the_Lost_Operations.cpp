#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    for(int i = 0; i < n; i ++ ) cin >> b[i];
    int m; cin >> m; 
    map<int, int> d;

    for(int i = 0; i <  m ; i ++){
        int x; cin >> x;
        d[x] ++;
    }


    int ok = true;
    for(int i = 0; i < n; i ++){
        if(a[i] != b[i] ){
            int val = b[i];
            if (d.count(val) == 0) {  // Check if b[i] exists in multiset
                ok = false;
                break;
            }
            d[val] --;
        }
        // cout << val <<" " << d[val] <<" " << ok << endl;
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

    
}


return 0;
}
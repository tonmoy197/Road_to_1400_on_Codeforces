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
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];

    bool ok = true;
    for(int i = 1; i < n-1; i ++){
        if(a[i-1] == 0) continue;
        a[i] = a[i] - a[i-1]*2;
        a[i+1] = a[i+1] - a[i-1];
        a[i-1] = 0;
        if(a[i] < 0 || a[i+1] < 0 ) ok = false;
    }
    
    for(auto x : a) if(x > 0) ok = false;
    
    // cout << ok << endl;
    // for(auto x: a) cout << x << " ";
    // cout << endl;
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

}
return 0;
}
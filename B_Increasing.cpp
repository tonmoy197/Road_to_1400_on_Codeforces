#include <algorithm>
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

    sort(a.begin(), a.end());

    bool ok = true;
    for(int i = 1; i < n; i ++){
        if(a[i] <= a[i-1]){
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}
return 0;
}
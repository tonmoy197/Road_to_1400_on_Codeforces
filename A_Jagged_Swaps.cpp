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
    for(auto &x : a) cin >> x; 
    // for(auto &x : a) cout << x <<" " ; 

    if(a[0] != 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}
return 0;
}
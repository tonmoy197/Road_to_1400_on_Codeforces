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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    map<int, int> mp;
    for(auto x : a) mp[x] ++;

    if(mp[k] > 0) cout<< "YES" << endl;
    else cout <<"NO" << endl;


}
return 0;
}
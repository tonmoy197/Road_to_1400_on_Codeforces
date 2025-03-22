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
    int n, m, k; cin >> n >> m >> k;
    map<int,int> fa, fb;
    for(int i = 0; i < n; i ++){
        int x ; cin >> x;
        if(x <= k) fa[x] ++;
    }

    for(int i = 0; i < m; i ++){
        int x ; cin >> x;
        if(x <= k) fb[x] ++;
    }

    vector<int> v;
    bool ok = true;
    if(fa.size() < k/2 || fb.size() < k/2){
        cout << "NO" << endl;
        continue;
    }
    for(int i = 1; i <= k; i ++){
        if(fa.find(i) == fa.end()) v.push_back(i);
    }

    for(auto x : v){
        if(fb.find(x) == fb.end()) ok = false;
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
return 0;
}
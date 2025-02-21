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
    map<int,int> f;
    for(auto &x : a){
        cin >> x;
        f[x] ++;
    } 

    // int ans = 0;
    // if(f.find(1) != f.end()){
    //     ans += 2;
    //     ans += f.size() - 1;
    // } 
    // else ans += f.size();

    int cntSin = 0;
    for(auto [x, y] : f){
        if(y == 1) cntSin ++;
    }
    int otherSize = f.size() - cntSin;

    int ans = 0;
    if(cntSin % 2 == 1){
        ans = (cntSin + 1) + otherSize;
    }
    else ans = (cntSin) + (otherSize );

    cout << ans << endl;
}
return 0;
}
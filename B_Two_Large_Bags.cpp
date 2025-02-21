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
    map<int, int> f;
    for(auto x : a){
        cin >> x;
        f[x] ++;
    }

    bool ok = true;
    for(auto [x, y] : f){
        // cout << x << " ";
        if(y % 2 == 1) ok = false;
    }

    if(ok){
        cout << "Yes" << endl;
        continue;
    }
    // cout << "No" << endl;
    sort(a.begin(), a.end());

    

}
return 0;
}
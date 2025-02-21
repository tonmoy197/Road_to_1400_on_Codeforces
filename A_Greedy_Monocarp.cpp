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
    int n, k ; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(a.rbegin(), a.rend());
    int ans = 0; 
    for(auto x : a){
        if(x + ans > k ) break;
        ans += x;
    }
    cout << k - ans << endl;

}
return 0;
}
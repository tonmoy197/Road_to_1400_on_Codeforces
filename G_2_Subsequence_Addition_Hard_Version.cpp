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
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    bool ok = true;
    if(a[0] != 1) ok = false;


    ll sum = a[0];
    for(int i = 1; i < n; i ++){
        if(sum < a[i] ){
           ok = false; 
        }
        sum += a[i];
    }
    if(ok) cout << "YES " << endl;
    else cout << "NO" << endl;

}
return 0;
}
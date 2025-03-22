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

    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i += 2) sum1 += a[i];
    for(int i = 1; i < n; i += 2) sum2 += a[i];

    cout << sum1 - sum2 << endl;
}
return 0;
}
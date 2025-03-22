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
    cout << min(n, k) * min(m , k) << endl;
}
return 0;
}
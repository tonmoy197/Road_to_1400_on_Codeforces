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
    int x, y; cin >> x >> y; 
    int xy = abs(x-y);
    // cout << xy << " ";
    bool ok = false;
  
    if( (xy + 1) % 9 == 0 && x > y ) ok = true;
    if(y > x && xy == 1) ok = true;

    if(ok && xy != 0) cout <<"Yes" << endl;
    else cout <<"No" << endl;
}
return 0;
}
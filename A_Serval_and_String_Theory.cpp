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
    int n, k; cin >> n >> k;
    string s ; cin >> s;
    string r = s; 
    reverse(r.begin(), r.end());
    if( s < r ) cout << "YES" << endl;
    else{
        if( k == 0 || n == 1 ) cout << "NO" << endl;
        else{
            sort(s.begin(), s.end());
            if(s[0] == s[n-1]) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}
return 0;
}
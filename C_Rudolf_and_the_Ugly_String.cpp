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
    string s; cin >> s; 
    int cnt = 0;
    if(n < 3 ) cout << 0 << endl;
    else {
        int cnt = 0;
        for(int i = 0; i < n-2; i ++){
            string subs = s.substr(i, 3);
            // cout << subs << endl;
            if(subs == "map" || subs == "pie"){
                cnt ++; 
                i += 2 ;
            }
           
           
        }
        cout <<cnt << endl;
    }
}
return 0;
}
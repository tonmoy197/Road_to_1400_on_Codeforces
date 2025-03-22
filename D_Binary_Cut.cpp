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
    // 01111... have in one cut 
    // 0000 all zero in one cut, all 11111. 
    string s; cin >> s;
    int n = s.size();

    int cnt01 = 0;
    int cnt = 0;
    for(int i = 0 ; i < n-1; i ++){
        if(s.substr(i, 2) == "01") cnt01 = 1;
    }

    for(int i = 0 ; i < n; ){
        if(s[i] == '0'){
            cnt ++;
            while(s[i] == '0') i ++;
        }
        if(s[i] == '1'){
            cnt ++;
            while(s[i] == '1') i ++;
        }
    }
    cout << cnt - cnt01 << endl;
}   
return 0;
}
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
    map<char, int> mp;

    for(auto c : s) mp[c]++;

    if( s[0] == '1' || s[n-1] == '1' ){
        cout << "YES" << endl;
        continue;
    } 

    int cnt = 0;
    for(int i = 0; i < n; i ++){
        if(s[i] == '0'){
            cnt = 0;
            continue;
        } 
        cnt ++;
        if(cnt >= 2){
            cout << "YES" << endl;
            break;
        }
    }
    if(cnt < 2 ) cout << "NO" << endl;

}
return 0;
}
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
    string s;  cin >> s;
    map<char, int> mp;
    int cnt = 0;
    for(int i= 0; i < s.size() - 1; i ++){
        if(s[i] == s[i + 1]) cnt ++;
    }
    if(cnt >= 1 ) cout << 1 << endl;
    else cout << s.size() << endl;
}
return 0;
}
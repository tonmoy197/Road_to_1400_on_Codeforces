#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    
int n; cin >> n; 
string s; cin >> s;
map<char, int> mp;
for(auto &x: s) mp[x] ++;
int a = mp['A'], b = mp['D'];
if(a > b) cout <<"Anton" << endl;
else if(b > a) cout << "Danik" <<endl;
else cout << "Friendship" << endl;

return 0;
}
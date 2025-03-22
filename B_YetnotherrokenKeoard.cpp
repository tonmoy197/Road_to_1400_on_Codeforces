#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string s; cin >> s;
    int n = s.size();
    // string a = "", b = "";
    vector<int> l, u, b;
    for(int i = 0; i < s.size(); i ++){
        char x = s[i];
        if(x == 'b'  && l.size() >= 1) l.pop_back();
        if(x == 'B'  && u.size() >= 1) u.pop_back();

        if(x != 'b' && x !='B'){
            if(isupper(s[i])) u.push_back(i);
            else if(islower(x)) l.push_back(i);
        } 
    }

    // for(auto x : l) cout << x << " ";
    // for(auto x : u) cout << x << " ";
 

    set<int> st;
    for(auto x : l) st.insert(x);
    for(auto x : u) st.insert(x);
    // for(auto x : st) cout << x << " ";


    // for(auto x : st) cout << x <<" ";
    string ans = "";
    // for(int i = 0; i < s.size(); i ++){
    //     char x = s[i];
    //     if(x != 'b' || x !='B'){
    //         if(st.find(i) != st.end()) ans += x;
    //     } 
    // }
    for(auto x : st) ans += s[x];
    cout << ans << endl;


}
return 0;
}
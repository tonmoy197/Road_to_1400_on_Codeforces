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
    int n; cin >> n; 

    // for(int p = 1; p <= 45; p ++){
    // n = p;
    // cout << n <<" : ";
    int x = 9;
    set<int> st;
    vector<int> ans;
    while(n > 0){
        if((st.find(x) == st.end()) && n >= x){
            ans.push_back(x);
            n -= x;     
        }
        x --;
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans) cout << x;
    cout << endl;

// }
    
}
return 0;
}
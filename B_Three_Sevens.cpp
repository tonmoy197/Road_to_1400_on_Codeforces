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
    int m; cin >> m;
    vector<vector<int>> vec(m+1);
    
    for(int i = 1; i <= m; i ++){
        int n; cin >> n;
        for(int j = 1; j <= n; j ++){
            int x; cin >> x;
            vec[i].push_back(x);
        }
    }

    // for(int i = 1; i <= m; i ++){
    //     for(int j = 0; j < vec[i].size(); j ++){
    //         cout << vec[i][j]<< " ";
    //     }
    //     cout << endl;
    // }

    set<int> st;
    vector<int> ans; 
    bool ans_check = true;
    for(int i = m; i >=  1; i --){
        bool ok = false;
        for(int j = 0; j < vec[i].size(); j ++){
            int x = vec[i][j];
            if((st.find(x) == st.end()) && (!ok)){
                ok = true;
                ans.push_back(x);
            }
            st.insert(vec[i][j]);
        }
        if(!ok){
            ans_check = false;
            ans.push_back(-1);
        }
    }

    if(ans_check){
        // cout << ans_check << endl;
        reverse(ans.begin(), ans.end());
        for(auto x : ans ) cout << x <<" ";
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }

}
return 0;
}
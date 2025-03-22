#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];

    // 5 4 0 2 2 0 0 1 0
    int ans = 0;
    set<int> st;
    for(int i = 0; i < n; i ++){
        if(a[i] != 0) st.insert(a[i]);
        if(a[i] == 0){
            cout<< (*st.end()) << endl;
            ans += (*st.end() );
            st.erase(st.end());
        }

    }

}
return 0;
}
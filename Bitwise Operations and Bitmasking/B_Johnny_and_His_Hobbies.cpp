// https://codeforces.com/problemset/problem/1362/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    set<int> st;
    for(int i = 0; i < n; i ++ ) {
        int x; cin >> x;
        st.insert(x);
    }

    // For loop for checking each value of the k from 1 to 1024
    int ans = -1;
    for(int k = 1; k < 1024; k ++) {
        set<int> new_set;
        for(auto u : st){
            new_set.insert((u^k));
        }
        if(new_set == st){
            ans = k;
            break;
        }
    }

    cout << ans << endl;

}
return 0;
}
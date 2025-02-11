// #include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;

const int N = 1e6 + 5;
int n, ans; string s;  
vector<int> x(N), l(N), r(N);

void dfs(int u){

    if(l[u] != 0){
        x[l[u]] = x[u] + (s[u] != 'L' );
        dfs(l[u]);
    }
    if(r[u] != 0){
        x[r[u]] = x[u] + (s[u] != 'R' );
        dfs(r[u]);
    }

    if(l[u] == 0 && r[u] == 0) ans = min(ans, x[u]);


}

int main()
{
int tt; cin >> tt;
while( tt -- ){
    cin >> n >> s;
    for(int i = 1; i <= n; i ++) {
        cin >> l[i] >> r[i] ;
    }
    s = '0' + s;
    ans = N;
    dfs(1);
    cout << ans <<endl;


}
return 0;
}
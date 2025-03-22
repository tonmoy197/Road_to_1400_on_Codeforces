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
    int n, m; cin >> n >> m;
    vector<string> str(n);
    for(int i = 0; i < n; i ++ ) cin >> str[i];
    // cout << str[0] << endl;

    int mn = 1e6;
    for(int i = 0; i < n; i ++){
        for(int j = i + 1; j < n; j ++ ){
            string x = str[i];
            string y = str[j];
            int cnt = 0;
            for(int k = 0; k < m; k ++){
                cnt += abs(x[k] - y[k]);
            }
            // cout << cnt << " ";
            mn = min(cnt, mn);
        }
    }
    cout << mn << endl;

}
return 0;
}
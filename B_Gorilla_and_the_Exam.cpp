#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;

    for(int i = 0; i < n; i ++){
        cin >> a[i];
        mp[a[i]] ++ ;
    } 

    vector<int> freq ;
    for(auto u : mp) freq.push_back(mp[u.first]);
    sort(freq.begin(), freq.end());

    // for(auto u : freq) cout << u << " ";

    if(n == 1 || k >= n - 1) cout << 1 << endl;
    else {
        if(k == 0) cout << mp.size() << endl;
        else{
            int temp = 0, cnt = 0;
            for(auto u : freq) {
                temp += u;
                if(temp > k) break;
                cnt ++;
            }
            cout << mp.size() - cnt << endl;
        }
    }
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> sum(3), cnt(3);
    for(int i = 0; i < n; i ++) {
        int x; cin >> x;
        sum[i%2] += x;
        cnt[i%2] += 1;
    }

    if(sum[0]%cnt[0] == 0 && sum[1]%cnt[1]==0 && sum[0]/cnt[0] == sum[1]/cnt[1]){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
return 0;
}
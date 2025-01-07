#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dis(int x1, int y1, int x2, int y2){
    return 1LL*(x2 - x1)*(x2 - x1) + 1LL*(y2 - y1)*(y2 - y1);
}

int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<pair<int, int>> vp;
    int m = n; 
    while(m --){
        int x, y; cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    ll dab = dis(x1, y1, x2, y2);

    int ok = true;
    for(auto xp : vp){
        int x = xp.first, y = xp.second;
        ll dcb = dis(x2, y2, x, y);
        if(dcb <= dab) {
            ok = false;
            break;
        }
    }

    if(ok){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


}
return 0;
}
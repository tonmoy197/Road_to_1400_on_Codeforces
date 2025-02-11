#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, m; cin >> n >> m;
    vector<string> vs1(n), vs2(n);
    for(auto &x:vs1) cin >> x;
    for(auto &x:vs2) cin >> x;
    
    bool ok = true;

    for(int i = 0; i < n; i ++){
        int vala = 0, valb = 0;
        for(int j = 0; j < m; j ++){
            vala += (vs1[i][j] - '0');
            valb += (vs2[i][j] - '0');
        }
        if((vala % 3) != (valb %3)) ok = false;
    }

    for(int i = 0; i < m; i ++){
        int vala = 0, valb = 0;
        for(int j = 0; j < n; j ++){
            vala += (vs1[j][i] - '0');
            valb += (vs2[j][i] - '0');
        }
        if((vala % 3) != (valb %3)) ok = false;
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;




    
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i  = 0; i < n; i ++) cin >> a[i];

    // if all equal or n == 1
    int equal = true;
    for(int i = 1; i < n; i ++){
        if(a[i] != a[i - 1]) equal = false;
    }


    int same = a[0];
    int minCnt = n;
    int curr = 0;
    for(int i = 0; i < n; i ++){
        if(a[i] != same) {
            minCnt = min(curr, minCnt);
            curr = 0;
        }
        else curr ++;
    }
    minCnt = min(curr, minCnt);

    if(equal || n == 1) cout << - 1 << endl;
    else cout << minCnt << endl;
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, k; cin >> n >> k;
    if(n == 1 && k == 1) {
        cout << 1 << endl << 1 << endl;
        continue;
    }

    int left = k - 1, right = n - k;
    if(k == 1 || k == n) cout << -1 << endl;
    else if(k % 2 == 0){
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k + 1 << endl;
    }
    else{
        cout << 3 << endl;
        cout << 1 << " " << k - 1 << " " << k + 2  << endl;
    }
}
return 0;
}
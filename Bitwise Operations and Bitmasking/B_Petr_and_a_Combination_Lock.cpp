// https://codeforces.com/problemset/problem/1097/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    int total = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        total += a[i];
    }

    if(total % 360 == 0) cout << "YES" << endl;
    else if ( n == 1 || total % 2 == 1) cout << "NO" << endl;
    else {
        bool check = false;
        for(int mask = 1; mask < (1 << n) ; mask ++){
            int temp = 0;
            for(int i = 0; i < n; i ++){
                if((mask & (1 << i)) != 0 ) temp += a[i];
                else temp -= a[i];
            }
            // cout << mask <<" " << temp <<" " << total - temp << endl;
            if(temp % 360 == 0){
                check = true;
                break;

            } 
        }

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


return 0;
}
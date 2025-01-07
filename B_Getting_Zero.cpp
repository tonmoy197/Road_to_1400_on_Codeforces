// https://codeforces.com/problemset/problem/1661/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 32768;

int main()
{
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++ ) cin >> a[i];

    
    for(int i = 0; i < n; i ++){
        int ans = 0 ;
        ll x = a[i];
        int min_operation = 30; 
        for (int addCount = 0; addCount <= 15; addCount ++){
            for (int shiftCount = 0; shiftCount <= 15; shiftCount ++){
                ll shiftValue = (ll)(x + addCount ) << shiftCount;

                if( shiftValue % mod == 0) min_operation = min(min_operation, addCount + shiftCount );
            }
        }

        cout << min_operation << " ";
    }
return 0;
}
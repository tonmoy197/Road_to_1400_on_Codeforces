#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);

    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    ll lower = total_sum - y;
    ll upper = total_sum - x;

    sort(a.begin(), a.end());

    ll cnt = 0; 

    for(int i = 0; i < n; i ++){
        // a[i] already selected from next element
        int left = i + 1;

        int low_ind = lower_bound(a.begin() + left , a.end(), lower - a[i]) - a.begin();
        int high_ind = upper_bound(a.begin() + left, a.end(), upper - a[i]) - a.begin() - 1;

        if(high_ind >= low_ind) cnt += (high_ind - low_ind + 1);
    }

    cout << cnt << endl;
}

return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;

while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];    

    // calculating ans 
    map<int, int> prefix_sum;
    int ans = 0, start = 0, window_sum = 0;

    for(int end = 0; end < n; end ++){
        window_sum += a[end];

        if(window_sum == 0 && ans == 0){
            ans ++;
            start = end;
        }
        else if (prefix_sum.find(window_sum) != prefix_sum.end() ){
            if(prefix_sum[window_sum] >= start){
                ans ++;
                start = end;
            }
        }

        prefix_sum[window_sum] = end;

    }

    // for(auto x : prefix_sum) cout << x.first <<" "; 

    cout << ans <<endl;

}
return 0;
}
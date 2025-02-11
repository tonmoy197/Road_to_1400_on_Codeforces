#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string a, b; cin >> a >> b;
    int m = (int)a.size(), n = (int)b.size();
    int ans = 500;

    for(int i = 0; i < n; i ++){
        int curr = i;
        for(auto c : a){
            if(curr < n && c == b[curr]) curr ++;
        }
        ans = min(ans, m + n - (curr - i ) );

    }



    cout << ans <<endl;

}
return 0;
}
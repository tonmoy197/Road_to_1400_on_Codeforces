#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> k(n);
    for(int i = 0; i < n; i ++) cin >> k[i];

    int lcm = 1;
    for(auto &x : k) lcm = (lcm * x)/ (__gcd(lcm, x));

    // cout << lcm << endl;

    int sum = 0;
    for(auto &x : k) sum += (lcm / x);

    // cout << lcm <<" " << sum << endl;

    if(sum < lcm){
        for(auto x : k){
            cout << lcm / x << " ";
        }
    }
    else cout << - 1 ;

    cout << endl;



}
return 0;
}
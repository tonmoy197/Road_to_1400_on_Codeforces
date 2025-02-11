#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll n; cin >> n;

    int c = __builtin_popcountll(n);
    if(c == 1){
        cout << 1 << endl;
        cout << n << endl;
    }
    else{
        cout << c + 1 << endl;
        for(int i = 59; i >= 0; i --){
            if(n >> i & 1){
                cout << (n ^ (1LL << i)) << " ";
            }
        }
        cout << n << endl;
    }

}
return 0;
}
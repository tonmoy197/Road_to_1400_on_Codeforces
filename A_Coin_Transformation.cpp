#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    ll n; cin >> n;
    if(n <=3 ) {
        cout << 1 << endl;
        continue;
    }
    
    // Calculate the number of times the coin can be split
    ll k =0;
    ll temp = n;
    while(temp >3){
        temp = temp /4;
        k++;
    }

    cout << (1 << k) << endl;

}
return 0;
}
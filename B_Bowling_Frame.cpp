#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int w, b; cin >> w >> b;

    ll k = 1, total = w + b;
    while(true){
        int temp = (k*(k+1)) / 2;
        int maxpin = ceil((k*(k+1)) / 4.0); 
        if(temp <= total && maxpin <= max(w,b)) k ++;
        else break;
    }

    cout << k - 1 << endl;
}
return 0;
}
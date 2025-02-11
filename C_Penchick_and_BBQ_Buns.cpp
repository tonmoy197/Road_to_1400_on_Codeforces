#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;

    if(n % 2 == 0 ) {
        for(int i = 1; i <= n; i += 2){
            cout << i<<" " << i <<" ";
        }
    }
    else{
        if(n <= 26 ) cout << - 1 ;
        else{
            for(int i = 1; i <= n; i ++){
                if(i == 1 || i == 10 || i == 26) cout << 1 <<" ";
                else if(i == 11 || i == 27) cout << 2 << " ";
                else {
                    cout << i + 1 << " " << i + 1 << " ";
                    i ++;
                }
            }
        }
    }

    cout << endl;
}
return 0;
}
#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int a, b, l; cin >> a >> b >> l;
    map<int, int > f;
    int cnta = 0, cntb = 0;

    int val = l;
    while(val %  a == 0 ){
        cnta ++;
        val /= a;
    }
    val = l;
    while(val %  b == 0 ){
        cntb ++;
        val /= b;
    }

    for(int x = 0; x <= cnta; x ++){
        for(int y = 0; y <= cntb; y ++){
            ll mul = pow(a,x) * pow(b,y);
            if(l % mul == 0){
                f[l/mul] ++;
            }
        }
    }
    
    cout << f.size() << endl;
    
}
return 0;
}
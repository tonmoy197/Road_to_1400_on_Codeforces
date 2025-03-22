#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;

double dis(int x1, int y1, int x2, int y2){
    return sqrt(double((x1- x2)*(x1-x2) + (y1-y2)*(y1-y2)));

}
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int l, r, d, u; cin >> l >> r >> d >> u;
    // int m = dis(-l, 0, 0, u);
    // int n = dis(-l, 0, 0, -d);
    // int o = dis(0, u, r, 0);
    // int p= dis(0, -d , r, 0);

    // // cout << m <<" " << n << o << p << endl;

    // if(m == n && n == o  && n == p ) cout << "Yes" << endl;
    // else cout << "No" << endl;

    if(l == r && d == u &&  r == d) cout << "Yes" << endl;
    else cout << "No" << endl;

}
return 0;
}
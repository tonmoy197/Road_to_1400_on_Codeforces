#include <cstdint>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int64_t k, n , w; cin >> k >> n >> w;
    ll money = (k * w* (w+1)/2);
    if(money <= n) cout << 0 <<endl;
    else cout << (k * w* (w+1)/2) - n<< endl;    

return 0;
}
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while(tt --){
        long long x;
        cin >> x;
        // Check if x is a power of 2 or of the form 2^k - 1
        if ((x & (x - 1)) == 0 || ((x + 1) & x) == 0) {
            cout << -1 << endl;
        } 
        else {
            // Try y from x-1 down to 1
            for (long long y = x - 1; y >= 1; y--) {
                long long z = x ^ y;
                if (x + y > z && x + z > y && y + z > x) {
                    cout << y << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
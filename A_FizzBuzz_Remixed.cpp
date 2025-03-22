#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++) {
        long long n; cin >> n; 
        long long q = n / 15;
        long long r = n % 15; 
        long long extra = min(3LL, r + 1); 
        long long answer = 3 * q + extra; 
        cout << answer << "\n"; 
    }
    return 0;
}
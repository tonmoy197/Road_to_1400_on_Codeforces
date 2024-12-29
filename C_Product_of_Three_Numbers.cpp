// https://codeforces.com/problemset/problem/1294/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int original_n = n;  // Store original value
        
        int a = -1, b = -1;

        // Find first factor
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                a = i;
                n /= i;
                break;
            }
        }

        // Find second factor if first was found
        if(a != -1) {
            for(int i = a + 1; i * i <= n; i++) {
                if(n % i == 0) {
                    b = i;
                    n /= i;
                    break;
                }
            }
        }

        // Check all conditions:
        // 1. Both factors must be found (a != -1 and b != -1)
        // 2. Remaining n must be greater than b (for uniqueness)
        // 3. n must not equal a or b
        if(a != -1 && b != -1 && n > b && n != a && n != b) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << n << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

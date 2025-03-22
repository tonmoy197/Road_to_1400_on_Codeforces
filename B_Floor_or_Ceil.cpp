#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        ll x, n, m;
        cin >> x >> n >> m;

        // For min values
        ll mn = x;
        ll p = m, q = n; 
        while (mn > 1 && (p > 0 || q > 0)) {
            if (mn % 2 == 0) {
                if (p > 0) {
                    mn = mn / 2;
                    p--;
                } else {
                    mn = mn / 2;
                    q--;
                }
            } else {
                if (q > 0) {
                    mn = mn / 2;
                    q--;
                } else {
                    mn = (mn + 1) / 2;
                    p--;
                }
            }
        }
        if (mn == 1) mn = (q > 0) ? 0 : 1;

        // For max values
        ll mx = x;
        p = m, q = n;  
        while (mx > 1 && (p > 0 || q > 0)) {
            if (mx % 2 == 0) {
                if (q > 0) {
                    mx = mx / 2;
                    q--;
                } else {
                    mx = mx / 2;
                    p--;
                }
            } else {
                if (p > 0) {
                    mx = (mx + 1) / 2;
                    p--;
                } else {
                    mx = mx / 2;
                    q--;
                }
            }
        }
        if (mx == 1) mx = (p > 0 && q == 0) ? 1 : 0;

        cout << mn << " " << mx << endl;
    }
    return 0;
}
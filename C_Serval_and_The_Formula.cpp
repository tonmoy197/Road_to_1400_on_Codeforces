#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;
        if (x == y) {
            cout << -1 << endl;
        } else {
            long long k = 0;
            while (k <= 1000000) { // Reasonable limit; solution exists
                if (((x + k) & (y + k)) == 0) {
                    cout << k << endl;
                    break;
                }
                k++;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> armies(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> armies[i];
    }

    int fedor = armies[m]; // Fedor's army
    int friends = 0;

    for (int i = 0; i < m; i++) {
        // Function to count the number of 1s in the binary representation of a number 
        int hammingDistance = __builtin_popcount(fedor ^ armies[i]);
        if (hammingDistance <= k) {
            friends++;
        }
    }

    cout << friends << endl;

    return 0;
}

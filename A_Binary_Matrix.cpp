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
    int n, m;
        cin >> n >> m;
        vector<string> matrix(n);
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
        }

        // Compute row XORs
        vector<int> row_xor(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                row_xor[i] ^= (matrix[i][j] - '0');
            }
        }
        int nr = 0;
        for (int i = 0; i < n; i++) {
            if (row_xor[i] == 1) nr++;
        }

        // Compute column XORs
        vector<int> col_xor(m, 0);
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                col_xor[j] ^= (matrix[i][j] - '0');
            }
        }
        int nc = 0;
        for (int j = 0; j < m; j++) {
            if (col_xor[j] == 1) nc++;
        }

        // Output the minimum number of flips
        cout << max(nr, nc) << endl;
}
return 0;
}
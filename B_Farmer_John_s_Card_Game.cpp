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
    int n, m; cin >> n >> m;
    
    bool ok = true;
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < m; j++) {
            int a;
            std::cin >> a;
            if (j == 0) {
                x = a % n;
            }
            if (a % n != x) {
                ok = false;
            }
        }
        p[x] = i;
    }
    if (ok) {
        for (int i = 0; i < n; i++) {
            std::cout << p[i] + 1 << " \n"[i == n - 1];
        }
    } else {
        std::cout << -1 << "\n";
    }
}
return 0;
}
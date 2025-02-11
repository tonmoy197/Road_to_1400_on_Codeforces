#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> nxt(n);
    nxt[n - 1] = n;
    for (int i = n - 2; i >= 0; i--) {
        nxt[i] = a[i] == a[i + 1] ? nxt[i + 1] : i + 1;
    }
    
    int q;
    std::cin >> q;
    
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--;
        if (nxt[l] < r) {
            std::cout << l + 1 << " " << nxt[l] + 1 << "\n";
        } else {
            std::cout << -1 << " " << -1 << "\n";
        }
    }
    
}
return 0;
}
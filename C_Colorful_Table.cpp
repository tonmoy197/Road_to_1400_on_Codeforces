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
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> a(n);
    std::vector<int> l(k, n), r(k, -1);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
        l[a[i]] = std::min(l[a[i]], i);
        r[a[i]] = i;
    }
    auto sl = l, sr = r;
    for (int i = k - 2; i >= 0; i--) {
        sl[i] = std::min(sl[i], sl[i + 1]);
        sr[i] = std::max(sr[i], sr[i + 1]);
    }
    for (int i = 0; i < k; i++) {
        if (l[i] > r[i]) {
            std::cout << 0;
        } else {
            std::cout << 2 * (sr[i] - sl[i] + 1);
        }
        std::cout << " \n"[i == k - 1];
    }

}
return 0;
}
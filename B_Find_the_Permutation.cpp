#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
int n;
    std::cin >> n;
    
    std::vector<std::string> g(n);
    for (int i = 0; i < n; i++) {
        std::cin >> g[i];
    }
    
    std::vector<int> p(n, -1);
    for (int i = n - 1; i >= 0; i--) {
        int k = 0;
        for (int j = 0; j < i; j++) {
            k += (g[j][i] == '1');
        }
        for (int j = 0; j < n; j++) {
            if (p[j] == -1) {
                if (k == 0) {
                    p[j] = i;
                    break;
                }
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << p[i] + 1 << " \n"[i == n - 1];
    }

}
return 0;
}
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
    int n; cin >> n; 

    int odd = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        odd += a % 2;
    }
    
    int ans = std::min(n - 1, odd) + std::min(1, n - odd);
    std::cout << ans << "\n";
    
}
return 0;
}
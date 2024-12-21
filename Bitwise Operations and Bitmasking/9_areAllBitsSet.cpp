#include <bits/stdc++.h>
using namespace std;
#define long long ll
// a given integer n are set (i.e., if n is of the form 2^k - 1 for some integer k).
//n = 3 (0011)
// n + 1 = 4 (0100)
// n & (n + 1) = 0011 & 0100 = 0000

int main()
{
    int n ; cin >> n;
    if((n & (n + 1)) == 0) cout << "Yes\n";
    else cout << "No\n";

return 0;
}
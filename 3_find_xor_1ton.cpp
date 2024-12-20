#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
// Logic : XOR operation exhibits a periodic pattern every 4 numbers
// n:     0  1  2  3  4  5  6  7  8 ...
// XOR:   0  1  3  0  4  1  7  0  8 ...

int xor_1ton(int n ){
    if(n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    if (n % 4 == 3) return 0;
    return 0;
}


int main()
{
    int n; cin >> n;
    cout << xor_1ton(n) << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define long long ll

// Logic : 
// A number is a power of two if it has exactly one bit set and n greater then 0
// Binary of : 4 → 100.
// Binary of : 4−1 → 011.
// 100&011 → 000.

int isPowerOfTwo(int n){
    // All the brackets are vvi
    return n > 0 && ((n & (n - 1)) == 0);

}
int main()
{
    int n ; cin >> n;
    if(isPowerOfTwo(n)) cout << "Yes\n";
    else cout << "No\n";

return 0;
}
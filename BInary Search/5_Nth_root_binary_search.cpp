#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;

int power(ll x, long long n) { // O(log n)
  int ans = 1 % mod; // Initialize result as 1, taking mod to handle the case when mod = 1

  while (n > 0) {
    if (n & 1) { // Check if the current bit of n is set (odd exponent)
      ans = 1LL * ans * x % mod; // Multiply result by the current base and take mod
    }
    x = 1LL * x * x % mod; // Square the base and take mod for the next bit
    n >>= 1; // Right shift n to process the next bit
  }
  
  return ans; // Return the final result
}

int findNthRoot(ll X, int N){
    ll low = 1, high = X, ans = 0;
    while(low < high){
        ll mid = low + (high - low ) / 2;
        ll midPow = power(mid, N);
        if(midPow == X) return mid;
        if(midPow < X ) {
            low = mid + 1;
            ans = mid;
        }
        else high = mid - 1;
    }
    return ans ;
}


int main()
{
    long long x = 100;
    cout << findNthRoot(x, 4) << endl;

return 0;
}
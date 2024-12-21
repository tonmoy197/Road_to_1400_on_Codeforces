// Problem: Given a number n, check if it is a power of 4.

#include <bits/stdc++.h>
using namespace std;
#define long long ll

// n > 0: Ensures is positive.
// (n & (n - 1)) == 0: Ensures n is a power of 2
// (n % 3 == 1): Ensures is a power of 4 among the powers of 2

int main()
{
    int n ; cin >> n;
    if((n > 0) && (n & (n - 1)) ==0 && (n%3==1)) cout << "Yes\n";
    else cout << "No\n"; 

return 0;
}
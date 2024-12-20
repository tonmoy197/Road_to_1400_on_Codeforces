// Problem: Given an integer n, find the position of the first set bit (1) in its binary representation.

#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
// Logic : 
// n and -n are complementary in their binary representation, except for the lowest set bit.
// All higher-order bits cancel out, leaving only the lowest set bit.
// n = 6 (binary: 00000110)
// -n = 11111010
// n & -n = 00000010 = 2

int main()
{
    int n ; cin >> n; 
    cout << (n & -n) <<endl;

return 0;
}

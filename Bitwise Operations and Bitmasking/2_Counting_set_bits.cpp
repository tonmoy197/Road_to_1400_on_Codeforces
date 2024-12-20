// Problem: Given an integer n, count the number of 1s in its binary representation.

#include <bits/stdc++.h>
using namespace std;
#define long long ll
//Logic : Remove the rightmost set element.
// Example: 
// First Iteration: 
// n=6 (Binary: 110)
// n−1=5 (Binary: 101)
// n&(n−1)=100 (removes the rightmost 1).
// Second iteration:
// n=4, 
// n−1=3, 
// n&(n−1)=0 (Binary: 000).
// Increment count to 2.
// Loop ends as :
// n=0.

// Binary of 15: 1111.
// Iterations: 1111 → 1110 → 1100 → 1000 → 0.
// Count: 4.

int main()
{
    int n; cin >> n; 
    int cnt = 0;
    
    while (n){
        n &= (n-1);
        cnt ++;
    }

    cout << cnt <<"\n";


return 0;
}
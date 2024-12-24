// Q: Given an array A, N integers (1 <= N <= 20, 0 <= Ai < 2^20),
//  count the number of non-empty subsets whose bitwise XOR is a prime number.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> prime;

const int MAX = 1 << 20;

vector<bool> sieve(int limit) {
    // Initialize a boolean vector with all entries set to true.
    // Index 0 and 1 are not prime numbers.
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    // Iterate from 2 to sqrt(limit)
    for (int p = 2; p * p <= limit; ++p) {
        if (is_prime[p]) {
            // Mark multiples of p as non-prime
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                is_prime[multiple] = false;
            }
        }
    }

    return is_prime;
}

int primeSubset(vector<ll> arr, int n){
   
    // check for each subset 
    int subset_cnt = 0;

    for(int mask = 1; mask < (1<<n); mask ++){
        // for each bit mask find xor value 
        int window_xor = 0;
        for(int i = 0; i < n; i ++){
            if(mask & (1<<i)) window_xor ^= arr[i];
        }
        
        if(prime[window_xor]) subset_cnt ++;
    }

    return subset_cnt;

}
int main()
{
    int n; cin >> n;
    vector<ll> arr(n); 
    for(int i = 0; i < n; i ++) cin >> arr[i];

    prime = sieve(MAX);

    cout << primeSubset(arr, n);

return 0;
}
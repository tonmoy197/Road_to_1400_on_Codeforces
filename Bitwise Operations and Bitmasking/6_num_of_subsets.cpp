// Problem: Given an array arr[] of size n and a number x, 
// count how many subsets have XOR equal to x.
#include <bits/stdc++.h>
using namespace std;
#define long long ll

// Logic : 
// 1. dp[j] tracks the count of subsets with XOR equal to j.
// 2. Initialize dp[0] = 1 (the empty subset has XOR 0) and all other values to 0.
// 3. For each element arr[i] in the array, update the DP array in reverse:
//     - For every possible XOR value j, add dp[j] to dp[j ^ arr[i]] to account for new subsets including arr[i].
// 4. After processing all elements, dp[x] gives the count of subsets with XOR equal to x.


int countSubsetsWithXor(const vector<int> &arr, int x){
    vector<int> dp(1025, 0);
    dp[0] = 1;
    int n = arr.size();

    for ( int i = 0; i < n; i ++){
        // Traverse the dp array in reverse to avoid overwriting values
        for (int j = 1024; j >= 0; j --){
            // dp[j] represents number of subsets with xor equal to j
            dp[j ^ arr[i]] += dp[j];
        }
    }

    return dp[x];
}

int main()
{
    vector<int> vec = {3, 4, 5};
    cout << countSubsetsWithXor(vec, 6) << "\n" ;


return 0;
}

// Time Complexity: O(n⋅m), where n is the size of the array and m=1024 (the range of XOR values).
// Space Complexity: O(m) for the DP array.

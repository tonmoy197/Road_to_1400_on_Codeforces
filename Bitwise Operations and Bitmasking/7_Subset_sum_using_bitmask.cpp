
// Problem: Given a set of n numbers, find all possible subset sums using bitmasking.

#include <bits/stdc++.h>
using namespace std;
#define long long ll

// Logic : A bitmask is a binary representation of integers from 0 to 2^n −1 (where n is the size of the array).
void subsetSums(const vector<int> &arr){
    int n = arr.size();
    for (int mask = 0; mask < (1<<n); mask ++){
        int sum = 0;
        for (int i = 0; i < n; i ++){
            if( mask & (1 << i)) sum += arr[i];
        }
        cout << sum << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    subsetSums(arr);

return 0;
}

// Time Complexity:
// Generating subsets: O(2^n) (because there are 2^n masks)
// For each mask, summing subset elements: O(n).
// total : o(n*2^n)

// Space Complexity: O(n) for storing the input array.


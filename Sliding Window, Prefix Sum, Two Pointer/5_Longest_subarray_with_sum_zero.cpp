// Given an array, find the length of the longest subarray whose sum is zero. 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// If two prefix sums (let's call them prefix_sum_i and prefix_sum_j where j > i) are equal, 
// the subarray between indices i+1 and j has a sum of zero, since prefix_sum_j - prefix_sum_i = 0.

int longestSubarrayWithSumZero(vector<int> &arr){
    int start = 0, max_len = 0, window_sum = 0;
    unordered_map<int, int> pre_sum;
    
    for(int i= 0; i < arr.size(); i ++){
        window_sum += arr[i];

        if(window_sum == 0) max_len = i + 1;
        else if (pre_sum.find(window_sum) != pre_sum.end()){
            max_len = max(max_len, i - pre_sum[window_sum]);
        }
        else pre_sum[window_sum] = i;
    }

    return max_len;
}
int main()
{
    vector<int> arr = {2, 0, -2, 4, -4 };
    cout << longestSubarrayWithSumZero(arr) << endl;

return 0;
}
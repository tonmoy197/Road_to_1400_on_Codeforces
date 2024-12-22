// Q: Given an array of integers, find the length of the 
// longest subarray with an even sum.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int longestSubarrayWithEvenSum(vector<int> &arr){
    int n = arr.size();
    unordered_map<int, int> pre_sum;
    int window_sum = 0, max_len = 0;

    for (int i = 0; i < n; i ++){
        window_sum += arr[i];

        if(window_sum % 2 == 0 ) max_len = i + 1;
        else if (pre_sum.find(window_sum) != pre_sum.end()){
            max_len = max(max_len, i - pre_sum[window_sum]);
        }
        else pre_sum[window_sum] = i ;
    }
    return max_len;

}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << longestSubarrayWithEvenSum(arr) << endl;


return 0;
}
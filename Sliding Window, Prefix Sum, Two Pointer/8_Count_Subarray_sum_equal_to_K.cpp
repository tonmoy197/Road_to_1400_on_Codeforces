// Q: Given an array of integers and sum k,
//  find the number of subarray whose sum is exactly k.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 1.Maintain a running sum and check if the difference between the current sum and 
// K exists in a hashmap to count subarrays with the desired sum.
// 2.Update the hashmap to store the frequency of each prefix sum encountered for future lookups.
int numberOfSubarray(vector<int> &arr, int k){
    unordered_map<int, int > prefix_sum_count;
    int sum = 0, count = 0, n = arr.size();

    for (int i = 0; i < n; i ++ ){
        sum += arr[i];

        if ( sum == k) count ++;
        else if (prefix_sum_count.find(sum - k) != prefix_sum_count.end()){
            count += prefix_sum_count[sum - k];
        }
        prefix_sum_count[sum] ++;
    }

    return count;
}

int main()
{
    vector<int> arr = {2, 4, 4, 5, 3, 3, 4};
    int k = 10;
    cout<< numberOfSubarray(arr, k) ;
return 0;
}
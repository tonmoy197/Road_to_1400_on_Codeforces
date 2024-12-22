// Q: Given a array of positive integers and a number k, 
// find the length fo the longest subarray where the product of all element is less than k.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int longestSubarray(vector<int> &arr, int k ){
    int product = 1, max_len = 0, n = arr.size(), start = 0;
    unordered_map<int, int > prefix_product;

    for(int end = 0; end < n; end ++){
        product *= arr[end];

        while(product >= k){
            product /= arr[start];
            start ++;
        }

        max_len = max(max_len, end - start + 1);
    }
    return max_len;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 50;
    cout << longestSubarray(arr, k);
return 0;
}
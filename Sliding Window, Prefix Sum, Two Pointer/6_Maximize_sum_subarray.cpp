// Q: Given a array and an integer k, find the maximum sum of a subarray 
// with at most k negative numbers.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxSum(vector<int> &arr, int k){
    int n = arr.size();
    int negCount = 0, start = 0, maxSum = 0, currSum = 0;

    for(int end = 0; end < n; end ++){
        if(arr[end] < 0) negCount ++;
        currSum += arr[end];

        while(negCount > k){
            if(arr[start] < 0 ) negCount --;
            currSum -= arr[start];
            start ++;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {1, -2, -3 , 4, 2, 1 , - 3, -1 };
    int k = 2;
    cout << maxSum(arr, k) << endl;
return 0;
}
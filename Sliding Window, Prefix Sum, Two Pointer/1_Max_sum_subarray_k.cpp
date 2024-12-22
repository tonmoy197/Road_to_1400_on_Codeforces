// Q : Find the maximum sum of any subarray of size k
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxSubarray(vector<int> &arr, int k){
    int window_sum = 0;
    for(int i = 0; i < k; i ++) window_sum += arr[i];

    int left = 0, right = k;
    int max_sum = 0;
    
    while( right < arr.size()){
        window_sum += arr[right] - arr[left];
        left ++;
        right ++;
        max_sum = max(max_sum, window_sum);
    }
    return max_sum ;

}

int main()
{
    vector<int> arr = {1, 2, 5, 3, 4,1, 3, 4};
    int k = 4;
    cout << maxSubarray(arr, k)<<endl;
return 0;
}
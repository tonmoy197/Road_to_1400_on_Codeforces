#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int smallestSubarray(vector<int> &arr, int s){
    int start = 0, min_len = INT_MAX, window_sum = 0;

    for(int end = 0; end < arr.size(); end ++){
        window_sum += arr[end];
        while(window_sum >= s){
            min_len = min(min_len, end - start + 1);
            window_sum -= arr[start++];
        }
    }
    return (min_len == INT_MAX )?0:min_len;
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 4, 2, 5, 6};
    int s = 10;
    cout << smallestSubarray(arr, s);
return 0;
}
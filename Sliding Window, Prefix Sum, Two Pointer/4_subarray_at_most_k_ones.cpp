// Q: Given a binaray array, find the number of subarray 
// that contains at most k ones. 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int atMostKOnes(vector<int> &arr, int k){
    int n = arr.size(), num_of_subarr = 0, start = 0;
    int cnt = 0;

    for (int end = 0; end < n; end ++){
        if(arr[end] == 1) cnt ++;
        while(cnt > k){
            if(arr[start] == 1) cnt --;
            start ++;
        }
        num_of_subarr += (end - start + 1 );
    }

    return num_of_subarr;
}

int main()
{
    vector<int> arr = {1, 0, 1, 0, 1};
    int k = 2; 
    cout << "Number of sub array : "<< atMostKOnes(arr, k) << endl;

return 0;
}
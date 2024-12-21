//Q: Find the minimum in a rotated sorted array.
#include <bits/stdc++.h>
using namespace std;
#define long long ll

// Logic: 
// If arr[mid] > arr[high] : The minimum element must be in the right half of the array.
//else : The minimum element is in the left half (including mid).
// When low == high, the loop terminates.

int MinRotatedBinarySearch(vector<int> &arr){
    int n = arr.size();
    int low = 0, high = n-1;

    while(low < high ){
        int mid = low + (high - low ) / 2;
        if ( arr[mid] > arr[high]) low = mid + 1;
        else high = mid - 1;
    }

    return low ;
}
int main()
{
    vector<int> arr = { 4, 5, 8, 9,9,9, 10,  1, 2};
    cout <<arr[MinRotatedBinarySearch(arr)]<<endl;

return 0;
}
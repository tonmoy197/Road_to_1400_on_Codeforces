//  Find the index of a target in a rotated sorted array.
#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
int RotatedBinarySearch(vector<int> &arr, int target){
    int low = 0, high = arr.size()-1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(arr[mid] == target) ans = mid;
        // // Determine if the left half of the array is sorted
        if(arr[low] < arr[mid] ){ 
            // // Check if the target lies within the sorted left half
            if(arr[low] <= target && target < arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        else {
            // If the left half isn't sorted, then the right half must be sorted
            if(arr[mid] < target && target <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return ans ;
}

int main()
{
    vector<int> arr = { 4, 5, 8, 9,9,9, 10,  1, 2};
    int target = 10;
    cout << RotatedBinarySearch(arr, target)<< endl;

    return 0;
}
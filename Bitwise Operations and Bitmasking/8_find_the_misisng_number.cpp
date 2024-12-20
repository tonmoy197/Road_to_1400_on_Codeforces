// Problem: You are given an array of size n containing elements from 1 to n+1, with one number missing. Find the missing number using XOR.


#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
//Logic : Compute the XOR of all numbers from 1 to n+1, XOR this result with the XOR of all elements
//  in the given array to cancel out duplicates, leaving only the missing number.

int misingNumber(const vector<int> &arr){
    int n = arr.size();
    // xor from 1 to n + 1
    int xor_all = 0;
    for(int i = 1; i <= n+1 ; i ++) xor_all ^= i;

    // xor of the array
    for(int i = 0; i < n; i ++ ) xor_all ^= arr[i] ;

    return xor_all;
}

int main()
{
    vector<int> arr = {1,2,3,5};
    cout<<misingNumber(arr)<<endl;
return 0;
}
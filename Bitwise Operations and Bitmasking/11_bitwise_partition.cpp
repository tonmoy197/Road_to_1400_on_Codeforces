// Problem Statement: Given an integer N ( 1≤N≤10^18 ), determine the number of ways to partition 
// its binary representation into two non-empty parts such that the first part has strictly fewer bits set to '1' than the second part.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long countValidPartitions(ll n){
    // Edge case : Check for str has only one bit, no splits possible
    if(n <= 1) return 0;

    // convert n to string without leading zeros
    string s = "";
    while(n > 0){
        if(n % 2 == 0) s +='0';
        else s += '1';
        n/=2;
    }
    reverse(s.begin(), s.end());

    // Precompute prefix sum of '1' s
    ll len = s.size();
    vector<ll> prefix_ones(len);
    prefix_ones[0] = (s[0] == '1');
    for(int i = 1; i < len; i ++) prefix_ones[i] = prefix_ones[i-1] + (s[i] == '1');

    // Iterate through all possible split points 
    ll total_ones = prefix_ones[len - 1];
    ll valid_partitions = 0;
    for(int i = 1; i < len ; i ++){
        ll left_ones =  prefix_ones[i-1];
        ll right_ones = total_ones - left_ones;
        if(left_ones < right_ones) valid_partitions ++;
    }

    return valid_partitions;
}

int main()
{
    ll n = 5;
    cout << countValidPartitions(n) << endl;


return 0;
}
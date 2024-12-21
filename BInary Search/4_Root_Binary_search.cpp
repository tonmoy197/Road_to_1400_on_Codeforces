#include <bits/stdc++.h>
using namespace std;
#define long long ll

int RootBinarySearch(int n){
    int low = 1, high = n, ans = 0;
    while(low < high){
        int mid = low + (high - low )/2;
        if(mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans; 

}

int 
int main()
{
    int n = 25; 
    cout << RootBinarySearch(n) << endl;
return 0;
}
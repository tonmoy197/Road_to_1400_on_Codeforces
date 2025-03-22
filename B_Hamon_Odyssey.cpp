#include <iostream>
#include <vector>
#include <map>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    // sort(a.begin(), a.end());

    int x = 1; 
    for(int i = 0; i <= 30; i ++) x |= (1 << i);
    // cout << x << endl;

    int minVal = x;
    for(int i = 0; i <  n; i ++ ) minVal &= a[i];

    // if [l,r] and becomes zero, then the total sum become zero
    int ans = 0;
    int temp = x;
    if(minVal == 0){
        for(int i = 0; i < n; i ++){
            temp &= a[i];
            if(temp == minVal){
                ans ++;
                temp = x;
            } 
        }
        cout << ans << endl;
    }
    else cout << 1 << endl;

    // cout << endl;
}
return 0;
}
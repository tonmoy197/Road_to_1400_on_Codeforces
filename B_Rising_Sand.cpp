#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, k; cin >> n >> k; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];

    int cnt = 0;
    for(int i = 1; i < n-1; i ++){
        if(a[i-1] + a[i + 1] < a[i]) cnt ++;
    }

    if(k == 1){
        cnt = (n -1)/2;
    }
    cout << cnt << endl;
    // 5 4 4 5 3 1 4
}
return 0;
}
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
    int n; cin >> n; 
    vector<int> a(n);
    map<int, int> f;
    for(auto &x : a) {
        cin >> x;
        f[x] ++;
    }
    sort(a.begin(), a.end());

    if(a[0] == a[n-1]){
        cout << - 1 << endl;
    }
    else{
        int cnt = f[a[n-1]] ;
        cout <<  n - cnt << " " << cnt << endl;
        for(int i = 0 ; i <  n - cnt; i ++) cout << a[i] <<" ";
        cout << endl;
        for(int i =  n - cnt ; i <  n; i ++) cout << a[i] <<" ";
        cout << endl;
    }
}
return 0;
}
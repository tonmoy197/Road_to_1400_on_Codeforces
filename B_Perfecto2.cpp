#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool is_square(int x){
    ll root = sqrtl(x);
    if(root * root == x ) return true;
    else return false;
}

int main()
{
    vector<ll> pre(5e5 + 5), a;
    
    pre[1] = 1;

    a.push_back(1);
    for(int i = 2; i <= 5e5; i ++){
        pre[i] = pre[i-1] + i;
        if(is_square(pre[i])){
            a.push_back(i);
            
        } 
    }

    // for(auto x : st) cout << " " << x;
    // cout << endl;
    
    int tt; cin >> tt;
    while( tt -- ){
    int n ; cin >> n; 
        

    vector<int> ans;
    if(is_square(pre[n]) || n == 1){
        cout << -1 << endl;
    }
    else{
        int pos = 0; 
        for(int i = 1; i <= n; i ++){
            if(i == a[pos]){
                pos ++;
                cout << i + 1 << " ";
                cout << i << " ";
                i ++;
                continue;
            }
            cout << i << " ";
        }
    cout << endl;
    }

    // ll check = 0;
    // for(auto x : ans){
    //     check += x;
    //     // cout << x << endl;
    //     if(is_square(check)) cout << x << " ";
    // }
    // cout << endl<< endl;

    // }

    // cout << a.size() << endl;
    

}
return 0;
}
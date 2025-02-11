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
    int x; cin >> x;
    
    vector <int> a;
    a.push_back(x);
    
    while (__builtin_popcount(x) != 1){
        for (int i = 0; i < 30; i++){
            if (x >> i & 1){
                int ok = (1 << i);
                a.push_back(x - ok);
                x -= ok;
                break;
            }
        }
    }
    
    while (x != 1){
        a.push_back(x / 2);
        x /= 2;
    }
    cout << a.size() << "\n";
    for (auto x : a) cout << x << " ";
    cout << "\n";
}
return 0;
}
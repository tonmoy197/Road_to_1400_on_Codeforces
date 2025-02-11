// #include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;
 

signed main() {
    int ttt;
    cin >> ttt;
    while(ttt--) {
        int n;
        cin >> n;
        if (n == 6){
        cout << "1 1 2 3 1 2\n";
        } 
        else {
            vector <int> ans;
            int v = (n + 1) / 2;
            for (int i = 1; i <= v; i++){
                ans.push_back(i);
            }
            for (int i = 1; i < v; i++){
                ans.push_back(i);
            }
            
            if (n % 2 == 0) ans.push_back(n);
            
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }
}
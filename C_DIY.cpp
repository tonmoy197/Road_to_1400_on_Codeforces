#include <algorithm>
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
    map<int, int> f; 

    for(int i = 0; i < n; i ++) {
        int x; cin >> x;
        f[x] ++;
    }

    vector<int> b;
    for(auto [x, y] : f){
        for(int i = 0; i < y/2; i ++){
            b.push_back(x);
        }
    }

    if(b.size() < 4 ) {
        cout << "NO" << endl;
        continue;
    }

    int x1 = b[0];
    int x2 = b[b.size() - 2];
    int y1 = b[1];
    int y2 = b[b.size()-1];

    cout << "YES" << endl;
    cout << x1 << " " << y1 << " " << x1 << " " << y2 << " " << x2 << " " << y1 << " " << x2 <<" " << y2 << endl;

   

}
return 0;
}
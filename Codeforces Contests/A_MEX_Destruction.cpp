#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);
    for(int i = 0; i < n; i ++)  cin >> a[i];

    while(!a.empty() && a.back() == 0) a.pop_back();
    reverse(a.begin(), a.end());

    while(!a.empty() && a.back() == 0) a.pop_back();
 

    if(a.empty()){
        cout << 0 <<endl;
        continue;
    }

    bool ans = true;
    // cout << a.size() << endl;
    for(auto x : a){
        if ( x == 0){
            ans = false;
            break;
        } 
        
    }

    if(ans) cout << 1 << endl;
    else cout << 2 << endl;
}

return 0;
}